# Monty

a stack and queue (LIFO and FIFO) programming language interpreter created in the C computer language. Interpreting Monty bytecodes files is the goal. The goal of the language [Monty] is to bridge the gap between scripting and programming languages (http://montyscoconut.github.io/)

# The monty program
 * Usage: monty file
    where file is the path to the file containing Monty byte code
* If the user does not give any file or more than one argument to your program, <br> print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE
* f, for any reason, it’s not possible to open the file, <br>print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE
* If the file contains an invalid instruction, print the error message L<line_number>: unknown <br>instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE
* The monty program runs the bytecodes line by line and stop if either
* If you can’t malloc anymore, print the error message Error: malloc failed, followed by a new line, <br>and exit with status EXIT_FAILURE.
* You have to use malloc and free and are not allowed to use any other function from man malloc <br> (realloc, calloc, …)
## Requirements

* Allowed editors: vi, vim, emac
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=c90
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You allowed to use a maximum of one global variable
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called monty.h
* Don’t forget to push your header file
* All your header files should be include guarded
* You are expected to do the tasks in the order shown in the project



## Author
---
**Surafel Melaku** 
---