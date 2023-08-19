# Regex-To-DFA ✨

[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](https://github.com/Toms343/Regex-To-DFA)
[![License](https://img.shields.io/badge/license-MIT-blue)](https://github.com/Toms343/Regex-To-DFA/blob/main/LICENSE)

## Table of Contents 📜

- [Introduction](#introductioon-)
- [Features](#features-)
- [Graphviz](#graphviz-)
- [Outputs](#outputs-)
- [Example](#example-)
- [Contributing](#contributing-)
- [Contact](#contact-)

## Introduction 🗨️

Welcome to the RegularExpression to DFA Converter repository! This project provides a simple yet powerful tool to convert regular expressions into Deterministic Finite State Automata (DFAs). Whether you're a student, developer, or enthusiast, this tool will help you grasp the relationship between regular expressions and DFAs while offering practical benefits in pattern recognition and text searching.

## Features 🫡

- **Concise Conversion:** Efficiently transform regular expressions into Deterministic Finite State Automata (DFAs) to enhance pattern matching and text searching capabilities.

- **Operator Support:** Handle 'asterisk' (*), 'or' (|), and 'and' operators to create intricate and customized patterns that suit your requirements.

- **Graphviz Integration:** Seamlessly generate PNG visualizations of DFAs using Graphviz, offering a visual representation of the DFA's structure and transitions.

- **Educational Tool:** Utilize this tool as a comprehensive educational aid to learn about regular expressions and DFAs. Gain insights into the foundational concepts of computational theory and programming through practical application.

Explore the power and versatility of this tool, which serves as a bridge between the theoretical underpinnings of regular expressions and the practical implementation of DFAs in pattern recognition and text analysis.

## Graphviz 🔥

To generate DFA visualizations, you'll need to have Graphviz installed on your system. Follow these steps to set up Graphviz:

1. **Download Graphviz:** Visit the Graphviz official website and download the appropriate version for your operating system: [Graphviz Downloads](https://graphviz.org/download/)

2. **Install Graphviz:** Install Graphviz on your system using the installer or package manager that corresponds to your operating system.

3. **Add Graphviz to PATH:** For the DFA visualization to work smoothly, make sure to add Graphviz to your system's PATH environment variable. This allows the tool to locate the Graphviz executable files.

With Graphviz properly installed and configured, you'll be able to generate PNG visualizations of DFAs using the tool. This visual representation can greatly aid in understanding the structure and transitions within the generated automata.

Feel free to consult the official Graphviz documentation for more detailed installation instructions and troubleshooting, if needed.

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
![Generated DFA](https://github.com/Toms343/Regex-To-DFA/blob/main/Regex-To-DFA/dfa.png)

### Explanation
The DFA illustration above provides insights into the structure and transitions of the DFA corresponding to the complex regular expression. The tool's console output would further provide detailed information about the DFA's states, transitions, and acceptance states.

## Contributing 🤝
Contributions are welcome! If you would like to contribute to this project, please follow these steps:

1. Fork the repository.
2. Create a new branch: `git checkout -b feature/your-feature-name`
3. Commit your changes: `git commit -m "Add your feature"`
4. Push to the branch: `git push origin feature/your-feature-name`
5. Open a pull request on the [GitHub repository](https://github.com/Toms343/Regex-To-DFA)

Please ensure that your contributions adhere to the following guidelines:
- Maintain a clear and concise coding style.
- Document any significant changes or additions.

Thank you for your contributions! 🙌

## Contact 📧

For any questions or feedback, feel free to reach out:
- Email: d.dadiani343@gmail.com
- LinkedIn: [David Dadiani](https://www.linkedin.com/in/david-dadiani-6677b5226/)