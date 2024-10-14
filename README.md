
# Java Compiler Project using Lex and Yacc

## Project Overview

This project focuses on developing a mini Java compiler that handles basic constructs such as `if-else` and `for` loops. The compiler uses **Lex** for lexical analysis and **Yacc** for syntax and semantic analysis. Additionally, the compiler generates intermediate code and finally translates it into **MIPS assembly code**.

## Project Components

The project is divided into several phases, and each phase is responsible for performing a specific task in the compilation process:

1. **Lexical Analysis (using Lex):**
   - Generates tokens from the Java source code.
   - Ignores single-line and multi-line comments.
   
2. **Syntax and Semantic Analysis (using Yacc):**
   - Parses the token stream using grammar rules.
   - Builds an **Abstract Syntax Tree (AST)** for the given program constructs.
   - Checks semantic rules such as variable declaration and assignment validation.

3. **Intermediate Code Generation:**
   - Converts the syntax tree into three-address code.
   - Generates labels and conditional jumps for `if-else` and `for` loops.

4. **Code Optimization:**
   - **Constant folding:** Evaluates constant expressions at compile time.
   - **Dead code elimination:** Removes unused variables and statements.
   - **Common subexpression elimination:** Replaces repeated subexpressions with variables.

5. **Target Code Generation (MIPS Assembly):**
   - Converts the optimized intermediate code into **MIPS assembly code**.
   - Uses temporary and saved registers for variable storage.

## Abstract Syntax Tree (AST)

The AST represents the hierarchical structure of the Java program. Below is a sample AST:

```
CLASS DECLARATION
├──modifier
│   └──(access modifier, public)
├──(classname, Example)
└──METHOD DECLARATION
    ├──modifier
    │   ├──(access modifier, public)
    │   └──(access modifier, static)
    ├──(datatype, void)
    ├──(datatype, String)
    └──DECLARATION
        ├──VARIABLE DECLARATION
        │   └──variable initialisation
        │       ├──(datatype, int)
        │       ├──(id, a)
        │       └──(num, 10)
        └──INITIALIZATION
            ├──ASSIGNMENT STATEMENT
            │   └──=
            │       ├──(id, a)
            │       └──+
            │           ├──(id, a)
            │           └──(num, 15)
            └──IF ELSE STATEMENT
                ├──IF STATEMENT
                │   ├──>
                │   │   ├──(id, a)
                │   │   └──(num, 5)
                │   └──DECLARATION
                │       └──VARIABLE DECLARATION
                │           └──variable initialisation
                │               ├──(datatype, int)
                │               ├──(id, b)
                │               └──(num, 15)
                ├──ELSE STATEMENT
                │   └──DECLARATION
                │       └──VARIABLE DECLARATION
                │           └──variable initialisation
                │               ├──(datatype, int)
                │               ├──(id, c)
                │               └──(num, 20)
                └──FOR LOOP
                    ├──FOR CONDITION
                    │   ├──variable initialisation
                    │   │   ├──(datatype, int)
                    │   │   ├──(id, z)
                    │   │   └──(num, 10)
                    │   ├──<
                    │   │   ├──(id, z)
                    │   │   └──(num, 20)
                    │   └──UNARY OPERATION
                    │       ├──(id, z)
                    │       └──(increment, ++)
                    ├──DECLARATION
                    │   └──VARIABLE DECLARATION
                    │       └──variable initialisation
                    │           ├──(datatype, int)
                    │           ├──(id, k)
                    │           └──(num, 10)
                    └──DECLARATION
                        └──VARIABLE DECLARATION
                            └──variable initialisation
                                ├──(datatype, int)
                                ├──(id, sam)
                                └──(num, 1)
```
## Key Files

- **Lex File (`parser.l`)**: Contains rules for generating tokens from the Java source code, such as identifiers, keywords, operators, etc.
- **Yacc File (`parser.y`)**: Defines grammar rules for Java constructs, including variable declarations, assignments, loops, and conditionals.
- **Python Script (`target_code.py`)**: Converts optimized intermediate code into MIPS assembly code.
- **Optimization Script (`optimize.py`)**: Applies constant folding, dead code elimination, and subexpression elimination to optimize the intermediate code.
- **Input Java Program (`a.java`)**: A sample Java program with `if-else` and `for` constructs, used for testing the compiler.

## How to Run

To compile and run the program, follow these steps:

1. **Lex and Yacc Compilation (AST):**
   - Open the `AST` folder.
   - Run the following commands:
     ```bash
     lex -l parser.l
     yacc -vd parser.y
     gcc lex.yy.c y.tab.c
     ./a.out < a.java
     ```

2. **Intermediate Code Generation (ICG):**
   - Open the `ICG` folder.
   - Run the following commands:
     ```bash
     lex -l icg.l
     yacc -vd icg.y
     gcc lex.yy.c y.tab.c
     ./a.out < a.java
     ```

3. **Optimization:**
   - Open the `optimize` folder.
   - Run the following command to optimize the intermediate code:
     ```bash
     python optimize.py icg.txt
     ```

4. **Target Code Generation:**
   - Open the `target_code` folder.
   - Run the following command to generate the MIPS assembly code:
     ```bash
     python target_code.py
     ```

## Results

The compiler produces the following outputs for the given Java input:

- **Symbol Table**: Stores variable names, data types, and scope.
- **Abstract Syntax Tree (AST)**: Represents the hierarchical structure of the Java program.
- **Intermediate Code**: Generates three-address code.
- **Optimized Code**: Performs constant folding, dead code elimination, and common subexpression elimination.
- **Target Code**: Produces MIPS assembly code.

## Known Limitations

- The compiler only supports the `int` data type.
- Error handling is basic and could be improved.
- The compiler is limited to `if-else` and `for` constructs and does not support other control flow constructs such as `while`, `do-while`, or `switch`.

## Future Enhancements

- Extend the grammar to support more control structures like `while`, `switch`, and ternary operators.
- Improve error handling for better diagnostics.
- Add support for additional data types like `char`, `String`, and `boolean`.

## References

- "Compilers: Principles, Techniques, and Tools" by Alfred V. Aho et al.
- TutorialsPoint Compiler Design Tutorials
- MIPS Instruction Reference from [mrc.uidaho.edu](http://www.mrc.uidaho.edu)
