# C Intro Projects

Coursework from an introductory C programming class at Clark College.  
Written and tested on Linux. Organized to demonstrate progression from simple syntax to modular multi-file projects.

## Projects

- **p1.c — Simple Addition**  
  Declares integers, performs `a + b`, and prints the result. Practice with variables and `printf`.

- **extra1.c — Submission Tool**  
  Small program that builds and executes a shell command (`cp`) to copy files into a destination directory.  
  Demonstrates command-line arguments, `sprintf`, and `system()` for OS interaction.

- **extra2.c — Decimal to Binary Converter**  
  Recursively converts a base-10 integer into binary.  
  Accepts up to 64-bit unsigned values and prints digits as the recursion unwinds.  
  Reinforces recursion, division/modulo, and use of `unsigned long long int`.

- **p2.c – p9.c — Core Assignments**  
  A series of progressively more complex programs covering:  
  - conditionals (`if/else`)  
  - loops (`for`, `while`)  
  - functions and modular design  
  - arrays and strings  
  - file I/O with `fopen`, `fscanf`, `fprintf`  
  - structs and composite data types  
  - integration of multiple concepts in `p9.c`

- **prog9/** — Multi-File Project  
  Final project split across multiple source files (`main.c`, `createList.c`, `releaseMemory.c`, `r9.c`) with header file (`prog9.h`).  
  Demonstrates modular design, header usage, and separate compilation.

- **my_file.c**  
  Small standalone exercise (to be updated once reviewed).

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
