#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;


struct machine{

    int startState = -1;
    bool startIsAccept = false;
    vector<int> acceptances;
    map<int, vector<pair<char, int>>> paths;
};

bool vectorContains(const vector<pair<char, int>>& vec, pair<char, int> value);
void orOperator(machine &first, machine &second);
void asteriskOperator(machine &machine);
void andOperator(machine &first, machine &second);
machine evaluate(string expr);
int findClosingParenthesis(int startIndex, string expr);


int stateCounter = 0;

/** function prints received machine
 * function prints number of states, number of acceptance state and number of paths on the first line
 * function prints acceptance states on second line
 * after that function prints paths for every state, (number of paths, (character, next state))
 */
void printMachine(machine &machine){

    int n = stateCounter;
    int a = (int) machine.acceptances.size();
    int t = 0;

    string acceptances;

    for(int i = 0; i < a; i++){
        acceptances += to_string(machine.acceptances[i]);
        if(i != machine.acceptances.size() - 1) acceptances += " ";
    }

    string paths;
    for(int i = 0; i < n; i++){

        vector<pair<char, int>> curr = machine.paths[i];
        t += (int) curr.size();

        paths += std::to_string(curr.size());

        for(auto & j : curr){
            string tmp;
            tmp.push_back(j.first);
            paths += " " + tmp + " " + to_string(j.second);
        }
        paths += "\n";
    }

    cout << n << " " << a << " " << t << endl;
    cout << acceptances << endl;
    cout << paths;
}


/** function generates dot file according to received machine for "graphviz" use.
 */
void generateDotFile(const machine& dfa, const string& filename) {

    ofstream dotFile(filename);
    if (!dotFile.is_open()) {
        cerr << "Error: Unable to open file for writing." << endl;
        return;
    }

    dotFile << "digraph DFA {" << endl;

    // Add color settings
    dotFile << "  graph [bgcolor=black];" << endl;
    dotFile << "  node [color=white, fontcolor=white];" << endl;
    dotFile << "  edge [color=white, fontcolor=white];" << endl;

    // Add states, if state is acceptance make its shape double circle
    for (int i = 0; i < stateCounter; i++) {
        dotFile << "  " << i;
        if (find(dfa.acceptances.begin(), dfa.acceptances.end(), i) != dfa.acceptances.end()) {
            dotFile << " [shape=doublecircle]";
        } else {
            dotFile << " [shape=circle]";
        }
        dotFile << ";" << endl;
    }

    // Adding paths
    for (const auto& entry : dfa.paths) {
        int fromState = entry.first;
        for (const auto& transition : entry.second) {
            char symbol = transition.first;
            int toState = transition.second;
            dotFile << "  " << fromState << " -> " << toState << " [label=\"" << symbol << "\"];" << endl;
        }
    }

    dotFile << "}" << endl;
    dotFile.close();
}

int main() {

    string regex;
    cin >> regex;

    machine result = evaluate(regex);
    string dotFilename = "dfa.dot";
    generateDotFile(result, dotFilename);

    // Call Graphviz to generate a graphical representation
    cout << "DOT file generated: " << dotFilename << endl;
    system(("dot -Tpng " + dotFilename + " -o dfa.png").c_str());

    cout << "Generated DFA\n" << endl;
    printMachine(result);

    return 0;
}

/** function receives starting index and expr, returns closing parenthesis index
 */
int findClosingParenthesis(int startIndex, string expr){
    int open = 1;
    for(int i = startIndex; i < expr.size(); i++){
        if(expr[i] == '(') open++;
        if(expr[i] == ')') open--;
        if(open == 0) return i;
    }
    return 0;
}

machine evaluate(string expr){

    // declaring result machine
    machine result;
    result.startIsAccept = true;
    result.startState = stateCounter;
    result.acceptances.push_back(stateCounter);
    stateCounter++;

    // if function received empty string function returns machine with 1 acceptance/starting state
    if(expr.empty()) return result;
    machine tmp;
    tmp.startState = -1;

    for(int i = 0; i < expr.size(); i++){

        // if expr i th character equals * function calls asteriskOperator
        if(expr[i] == '*'){

            asteriskOperator(tmp);

            // if expr i th character equals | (or operator) function calls orOperator for 2 machine and returns,
            // 1. machine before i index
            // 2. machine after i index
        }else if(expr[i] == '|'){

            // merge temporary machine to result machine
            andOperator(result, tmp);

            tmp = evaluate(expr.substr(i + 1));
            orOperator(result, tmp);

            return result;

            // if expr it symbol equals ( function finds machine inside that parenthesis recursively and continues working
        }else if(expr[i] == '('){

            // merge temporary machine to result machine,
            andOperator(result, tmp);

            int closing = findClosingParenthesis(i + 1, expr);
            tmp = evaluate(expr.substr(i + 1, closing - i - 1));
            i = closing;

        }else {

            // if function comes to else block code merges result-temporary machines again and creates new temporary machine
            // with only one starting state
            andOperator(result, tmp);
            machine newMachine;
            newMachine.startState = stateCounter;
            newMachine.paths[stateCounter].emplace_back(expr[i], stateCounter + 1);
            newMachine.acceptances.push_back(stateCounter + 1);
            tmp = newMachine;

            stateCounter += 2;
        }
    }

    andOperator(result, tmp);
    return result;
}

void andOperator(machine &first, machine &second){

    if(second.startState == -1) return;

    map<int, vector<pair<char, int>>> paths = second.paths;

    // merging second machines start state into first machines acceptance states
    // for example: if first machine is (1 -a-> 2, 2 -a-> 3, 2 -b-> 4, acceptance -> 3, 4)
    // and second machine is (5 -c-> 6, 5 -d-> 7 ...)
    // first machine after merging will be (1 -a-> 2, 2 -a-> 3, 2 -b-> 4,     3 -c-> 6, 3 -d-> 7, 4 -c-> 6, 4 -d-> 7,)
    for(int i = 0; i < first.acceptances.size(); i++){
        for(int j = 0; j < paths[second.startState].size(); j++){
            first.paths[first.acceptances[i]].emplace_back(paths[second.startState][j].first, paths[second.startState][j].second - 1);
        }
    }

    // after merging second machines start state, just copying another paths to first machine
    for (auto i: paths) {

        if (i.first == second.startState) continue;

        for (int j = 0; j < i.second.size(); j++) {
            first.paths[i.first - 1].emplace_back(i.second[j].first, i.second[j].second - 1);
        }
    }

    // if second machines start state was not acceptance, first machine acceptance states will be second machine accept states
    if(!second.startIsAccept) {

        first.startIsAccept = false;
        first.acceptances = second.acceptances;
        for (int &acceptance: first.acceptances) acceptance--;

    }else{
        for (int &acceptance: second.acceptances) {
            if(!count(first.acceptances.begin(), first.acceptances.end(), acceptance - 1)) {
                first.acceptances.push_back(acceptance - 1);
            }
        }
    }
    stateCounter--;
}

/** function returns true if received vector contains received value
 */
bool vectorContains(const vector<pair<char, int>>& vec, pair<char, int> value){
    for (auto &i: vec) {
        if (i.first == value.first && i.second == value.second) return true;
    }

    return false;
}

void asteriskOperator(machine &machine){

    if(machine.startState == -1) return;

    // we should add all path to acceptance states which goes from starting state
    map<int, vector<pair<char, int>>> paths = machine.paths;

    for(int i = 0; i < machine.acceptances.size(); i++){
        if(machine.acceptances[i] == machine.startState) continue;
        for(int j = 0; j < paths[machine.startState].size(); j++){

            if(!vectorContains(machine.paths[machine.acceptances[i]], machine.paths[machine.startState][j])) {
                machine.paths[machine.acceptances[i]].push_back(machine.paths[machine.startState][j]);
            }
        }
    }

    // starting state should become acceptance
    if(!machine.startIsAccept) {
        machine.startIsAccept = true;
        machine.acceptances.push_back(machine.startState);
    }
}

void orOperator(machine &first, machine &second) {

    if(second.startState == -1) return;

    // if second machines starting state is acceptance first machines starting state also should become acceptance
    if (second.startIsAccept && !first.startIsAccept) {
        first.acceptances.push_back(first.startState);
        first.startIsAccept = true;
    }

    map<int, vector<pair<char, int>>> paths = second.paths;

    // just copying every path to first machines starting state from second machines starting state
    for (int i = 0; i < paths[second.startState].size(); i++) {
        first.paths[first.startState].emplace_back(paths[second.startState][i].first, paths[second.startState][i].second - 1);
    }

    // copying another paths to first machine
    for (auto i: paths) {

        if (i.first == second.startState) continue;

        for (int j = 0; j < i.second.size(); j++) {
            first.paths[i.first - 1].emplace_back(i.second[j].first, i.second[j].second - 1);
        }
    }

    // copying acceptance states to first machine
    for (int acceptance : second.acceptances) {

        if(!count(first.acceptances.begin(), first.acceptances.end(), acceptance - 1)) {
            first.acceptances.push_back(acceptance - 1);
        }
    }
    stateCounter--;
}