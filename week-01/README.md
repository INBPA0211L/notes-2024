# Week #01

## Topics

The environment (`gcc` compiler, VS Code, Hello World), compilation vs. runtime.

## Agenda

1. Python vs. C in concepts
2. VS Code, GCC compiler
3. Hello, World!

## Highlights

### Command `gcc` and its options

* `-o` for renaming the output file
* `-E` for precompiling the code
  * removes comments
  * replaces named constants by their values
  * resolves the `#include` statements 
* `-c` for compiling the code
* `nothing` for linking the code

### The Hello world program and its syntax

* the `#include` statements, header files `stdio.h` and `stdlib.h`
* the `main()` function's signature
* the `0` exit code, the `EXIT_SUCESS` named constant

## Required actions

* Setup a GCC compiler on your computer. For Windows we recommend to install [MinGW following this tutorial](https://www.geeksforgeeks.org/installing-mingw-tools-for-c-c-and-changing-environment-variable/).
* Setup a [VS Code](https://code.visualstudio.com/) on your computer, install [extension C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools).

## Required skills

* Be able to use command `gcc` (with all the discussed options).
* Be able to use VS Code.
* Be able to create a Hello World program.