# C Intro Projects

Coursework from an introductory C programming class at Clark College.  
Written and tested on Linux. Organized to demonstrate progression from simple syntax to modular multi-file projects.

## Projects

- **p1.c — Simple Addition**  
  Declares integers, performs `a + b`, and prints the result. Practice with variables and `printf`.

- **p2.c — Cash Register Simulation**  
  Calculates the total cost of groceries (oranges, energy drinks, yogurt) including tax.  
  Demonstrates input handling, arithmetic, and formatted output.

- **p3.c — Loan Calculator**  
  Computes monthly payments and interest for a loan based on user input.  
  Reinforces loops, arithmetic, and handling of floating-point values.

- **p4.c — Find the Nth Prime (basic version)**  
  Implements a function to return the *nth* prime number.  
  Includes a safeguard if the request is too large.  
  Demonstrates loops, conditionals, and basic algorithm design.

- **p5.c — Find the Nth Prime (refined version)**  
  Improved prime finder with modular design:  
  - `find_prime()` locates the nth prime  
  - `check_if_prime()` tests primality  
  Demonstrates function design, loop efficiency, and algorithmic optimization.

- **p6.c — Palindrome Checker**  
  Reads a string, normalizes it, and checks if it is a palindrome.  
  Practices arrays, string manipulation, helper functions, and boolean logic.

- **p7.c — Structs and Sorting**  
  Stores a list of people (name, age) in an array of structs.  
  Prints and sorts them by age.  
  Demonstrates defining structs, arrays of structs, and sorting logic.

- **p8.c — File Output**  
  Writes multiple strings to a file using `fopen` and `fprintf`.  
  Demonstrates file I/O, error checking, and working with file pointers.

- **p9.c — Integration Assignment**  
  Pulls together concepts from earlier assignments in a single program.  
  Reinforces functions, arrays, and modular thinking.

- **extra1.c — Submission Tool**  
  Small program that builds and executes a shell command (`cp`) to copy files into a destination directory.  
  Demonstrates command-line arguments, `sprintf`, and `system()` for OS interaction.

- **extra2.c — Decimal to Binary Converter**  
  Recursively converts a base-10 integer into binary.  
  Accepts up to 64-bit unsigned values and prints digits as the recursion unwinds.  
  Reinforces recursion, division/modulo, and use of `unsigned long long int`.

- **prog9/** — Multi-File Project  
  Final project split across multiple source files (`main.c`, `createList.c`, `releaseMemory.c`, `r9.c`) with header file (`prog9.h`).  
  Demonstrates modular design, header usage, and separate compilation.

## Skills Practiced
- Variables, operators, and formatted output
- Conditionals and loops
- Functions and parameter passing
- Arrays and strings
- File I/O and working with data from files
- Structs for organizing data
- Recursion
- Modular, multi-file program design
- Basic interaction with the shell from C (`system()`)

## How to Build and Run

### Single-file programs
Compile and run any `.c` file like this:
```bash
gcc p1.c -o p1
./p1
