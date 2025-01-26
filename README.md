# Regex-To-DFA ✨

[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](https://github.com/Toms343/Regex-To-DFA)
[![License](https://img.shields.io/badge/license-MIT-blue)](https://github.com/Toms343/Regex-To-DFA/blob/main/LICENSE)

## Background 🤯

This project started as a university assignment for the **Theoretical Informatics** course. The goal was to transform regular expressions into a deterministic state machine. Initially, the results were simply printed in the terminal.  

After completing the course, I discovered **Graphviz**—an amazing tool for visualizing graphs! 🌟 I decided to revisit my assignment and enhance its output, turning it into something visually appealing and much cooler. 😎  

## Details 🧐

It's rigth to say that this project doesn't fully cover all aspects of regular expressions. It supports only three operators: **Asterisk (`*`)**, **Or (`|`)**, and **And (concatenation)**.  

### Output 💻

The RegularExpression-to-DFA-Converter tool provides two distinct types of outputs:

1. **Console Output:** When you run the tool, it will display valuable information in the console. The console output structure is as follows:

   - **Line 1:** Three values separated by spaces:
     - Number of states in the generated DFA.
     - Number of acceptance states (final states) in the DFA.
     - Number of paths within the DFA.

   - **Line 2:** A space-separated list of acceptance states.

   - **Subsequent Lines (for each state):** Each line represents a state's transition paths:
     - The first number indicates the count of paths from the current state.
     - For each path, you'll see the following details separated by a space:
       - The character that triggers the transition.
       - The number of the state reached by following that character.

   For example, if you're on the 0th line of paths, it displays paths from the 0th state. If you're on the 7th line, it shows paths from the 6th state.

2. **Visualization:** In addition to the console output, the tool generates a visual representation of the DFA. This visualization is in the form of a PNG image generated using Graphviz. The image illustrates the DFA's states, transitions, and overall structure. This graphical output can be immensely helpful in comprehending complex patterns and their corresponding DFAs.


## Setup 🌱 

To generate DFA visualizations, you'll need to have Graphviz installed on your system. Follow these steps to set up Graphviz:

1. Download & install [graphviz](https://graphviz.org/download/)

2. Download & install [cmake](https://cmake.org/download/)

3. Open your terminal/command prompt and Use the cd command to navigate to the directory where you cloned the regex to DFA repository.

4. Create and naviage to build directory `mkdir build && cd build`

5. Generate build files `cmake ..`

6. Compile the code `cmake --build .`

7. Run compiled code `./Regex_To_DFA`

## Outputs ✅

The RegularExpression-to-DFA-Converter tool provides two distinct types of outputs:

1. **Console Output:** When you run the tool, it will display valuable information in the console. The console output structure is as follows:

   - **Line 1:** Three values separated by spaces:
     - Number of states in the generated DFA.
     - Number of acceptance states (final states) in the DFA.
     - Number of paths within the DFA.

   - **Line 2:** A space-separated list of acceptance states.

   - **Subsequent Lines (for each state):** Each line represents a state's transition paths:
     - The first number indicates the count of paths from the current state.
     - For each path, you'll see the following details separated by a space:
       - The character that triggers the transition.
       - The number of the state reached by following that character.

   For example, if you're on the 0th line of paths, it displays paths from the 0th state. If you're on the 7th line, it shows paths from the 6th state.

2. **Visualization:** In addition to the console output, the tool generates a visual representation of the DFA. This visualization is in the form of a PNG image generated using Graphviz. The image illustrates the DFA's states, transitions, and overall structure. This graphical output can be immensely helpful in comprehending complex patterns and their corresponding DFAs.

## Example 📷

Let's explore an example of how the Regex-To-DFA Converter tool can handle a complex regular expression and generate a corresponding DFA.

### Regular Expression
The given regular expression: `((u8p|y|j)((p5x|ypje|(dr)*|y1g)*))*|((7g|(j)*|fhx)*)((e|xo1)*)(k01j)|(flbb|y93w|dk)(hvd)|qz`

### Generated DFA
The DFA representing the given regular expression can be visualized below:
![Generated DFA](https://github.com/TomC333/Regex-To-DFA/blob/main/dfa.png)
