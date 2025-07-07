# Regex-To-DFA ✨

[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](https://github.com/Toms343/Regex-To-DFA)
[![License](https://img.shields.io/badge/license-MIT-blue)](https://github.com/Toms343/Regex-To-DFA/blob/main/LICENSE)

A compact C++ tool that converts simple regular expressions to DFAs and visualizes the result using Graphviz.  
Originally a university assignment for Theoretical Informatics, I later improved it with image-based DFA output.  
Supported operators: **concatenation**, **OR (`|`)**, and **Kleene star (`*`)**.  

### 🧪 Example  
**Regex:** `((u8p|y|j)((p5x|ypje|(dr)|y1g)))|((7g|(j)|fhx))((e|xo1))(k01j)|(flbb|y93w|dk)(hvd)|qz`  

![Generated DFA](https://github.com/TomC333/Regex-To-DFA/blob/main/dfa.png)
