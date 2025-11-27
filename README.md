<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-printf" rel="noopener">
    <img width=400px height=400px src="https://image.noelshack.com/fichiers/2025/48/2/1764078468-ok.jpg" alt="Project logo">
  </a>
</p>

<h3 align="center">Holbertonschool Printf</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]() [![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-printf.svg)](https://github.com/hugou74130/holbertonschool-printf/issues) [![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-printf.svg)](https://github.com/hugou74130/holbertonschool-printf/pulls) [![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

---
<div align="left">
Custom and complete implementation of the printf function in C.

## 📝 Table of Contents

- [About](#about)
- [Project Description](#project_description)
- [Features](#features)
- [File Structure](#file_structure)
- [Getting Started](#getting_started)
- [Compilation](#compilation)
- [Running the tests](#tests)
- [Usage](#usage)
- [Supported Specifiers](#specifiers)
- [Flowchart](#flowchart)
- [Code Examples](#examples)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

## 🧐 About

This project is a complete implementation of the `_printf` function in C. The main objective is to reproduce the behavior of the standard printf function from the C library, handling different format conversion specifiers. This implementation was developed as part of Holbertonschool training and demonstrates a deep understanding of advanced C concepts, including:

- Variable argument handling (`va_list`, `va_arg`)
- Function pointer manipulation
- Use of structures and arrays
- String manipulation
- System calls (`write`)

## 📖 Project Description

The `_printf` project requires creating a function that produces formatted output according to a format string, similar to the standard `printf` function from the C library.

### Project Objectives:

- Implement a variadic `_printf` function
- Handle multiple conversion specifiers
- Count and return the number of displayed characters
- Write output to stdout (standard output stream)
- Follow Holbertonschool coding standards (Betty)

### Constraints:

- Do not reproduce printf's buffer management
- Do not handle flag characters
- Do not handle field width
- Do not handle precision
- Do not handle length modifiers

## ✨ Features

### Supported Conversion Specifiers:

- **`%c`** - Displays a single character
- **`%s`** - Displays a string (handles NULL)
- **`%d`** - Displays a signed integer in decimal
- **`%i`** - Displays a signed integer in decimal (identical to %d)
- **`%%`** - Displays the percent character (%)

### Main Features:

- Variable argument handling
- Exact character counting for display
- NULL string handling
- Negative number handling
- Direct output to stdout
- Return of the number of printed characters

## 📁 File Structure

```
holbertonschool-printf/
├── test/
│   └── main.c
├── _print_f.c
├── _putchar.c
├── Flowchart_printf.png
├── get_specifier.c
├── main.h
├── man_3_printf
├── print_char.c
├── print_int.c
├── print_percent
├── print_string.c
├── _README.md
```

## 🏁 Getting Started

These instructions will allow you to get a copy of the project running on your local machine for development and testing.

### Prerequisites

What you need to install to run the software:

```
gcc (GNU Compiler Collection) - C Compiler
make - Build tool (optional)
git - Version control system
```

### Checking Prerequisites:

```bash
gcc --version # Verify that gcc is installed
git --version # Verify that git is installed
```

### Installing

Steps to install and configure the development environment:

**Step 1: Clone the repository**

```bash
git clone https://github.com/hugou74130/holbertonschool-printf.git
cd holbertonschool-printf
```

**Step 2: Verify the project structure**

```bash
ls -la
```

You should see all the `.c` files and the `main.h` file.

## 🔨 Compilation

### Simple compilation with gcc:

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o printf_test
```

**Explanation of flags:**

- `-Wall` : Enable all standard warnings
- `-Wextra` : Enable additional warnings
- `-Werror` : Treat warnings as errors
- `-pedantic` : Force strict compliance with C standard

### Compilation with object files:

```bash
gcc -c *.c # Compile all files to .o
gcc *.o -o printf_test # Link the objects
```

### Compilation of a single file with the library:

```bash
gcc -c _printf.c _putchar.c print_char.c print_string.c print_int.c print_percent.c get_specifier.c
gcc main.c *.o -o program
```

## 🔧 Running the tests

### Verify compilation:

```bash
gcc -c *.c
```

This should create `.o` files without errors.

### Run the tests:

```bash
./printf_test
```

### Manual tests:

Create a `test.c` file:

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
	int result;

	result = _printf("Test: %d\n", 42);
	printf("Characters displayed: %d\n", result);

	result = _printf("String: %s\n", "Hello");
	printf("Characters displayed: %d\n", result);

	result = _printf("Char: %c\n", 'A');
	printf("Characters displayed: %d\n", result);

	result = _printf("Percent: 50%%\n");
	printf("Characters displayed: %d\n", result);

	return (0);
}
```

Compile and run:

```bash
gcc test.c _printf.c _putchar.c print_char.c print_string.c print_int.c print_percent.c get_specifier.c -o test
./test
```

## 🎈 Usage

### Basic usage:

To use this printf implementation in your code:

```c
#include "main.h"

int main(void)
{
	int chars_printed;

	/* Display a simple string */
	chars_printed = _printf("Hello, World!\n");

	/* Display with specifiers */
	chars_printed = _printf("Name: %s\n", "Alice");
	chars_printed = _printf("Age: %d\n", 25);
	chars_printed = _printf("Grade: %c\n", 'A');

	/* Combine multiple specifiers */
	chars_printed = _printf("%s is %d years old and got an %c\n", "Bob", 30, 'B');

	return (0);
}
```

### Program compilation:

```bash
gcc main.c _printf.c _putchar.c print_char.c print_string.c print_int.c print_percent.c get_specifier.c -o program
./program
```

## 🎯 Supported Specifiers

| Specifier | Description | Example | Output |
|---|---|---|---|
| `%c` | Character | `_printf("%c", 'A')` | `A` |
| `%s` | String | `_printf("%s", "Hello")` | `Hello` |
| `%d` | Signed integer | `_printf("%d", 42)` | `42` |
| `%i` | Signed integer | `_printf("%i", -15)` | `-15` |
| `%%` | Percent | `_printf("50%%")` | `50%` |

## 📊 Flowchart

Below is the flowchart illustrating the execution flow of the `_printf` function:

![Printf Flowchart](./Flowchart_printf.png)

### Flowchart Description:

The flowchart demonstrates the following process:

1. **Initialization**: The `_printf` function receives the format string and variable arguments
2. **Parsing**: Each character of the format string is examined
3. **Detection**: When a `%` character is found, the next character is identified as a specifier
4. **Routing**: Based on the specifier type, the appropriate handler function is called:
   - `%c` → `print_char()`
   - `%s` → `print_string()`
   - `%d` / `%i` → `print_int()`
   - `%%` → `print_percent()`
5. **Output**: Each character is written to stdout via `_putchar()`
6. **Counting**: The total number of characters displayed is tracked
7. **Return**: The function returns the total character count

This architecture ensures modularity, maintainability, and clean separation of concerns through the use of function pointers and dedicated handler functions for each conversion specifier.

## 💻 Code Examples

### Example 1: Display a character

```c
_printf("Character: %c\n", 'X');
/* Output: Character: X */
```

### Example 2: Display a string

```c
_printf("Welcome, %s!\n", "Developer");
/* Output: Welcome, Developer! */
```

### Example 3: Display integers

```c
_printf("Positive: %d, Negative: %d\n", 100, -50);
/* Output: Positive: 100, Negative: -50 */
```

### Example 4: Combine multiple formats

```c
_printf("%s scored %d points with grade %c\n", "John", 95, 'A');
/* Output: John scored 95 points with grade A */
```

### Example 5: Display percentages

```c
_printf("Progress: 75%%\n");
/* Output: Progress: 75% */
```

### Example 6: Handle NULL values

```c
_printf("String: %s\n", NULL);
/* Output: String: (null) */
```

## ⛏️ Built Using

- [C](https://en.wikipedia.org/wiki/C_(programming_language)) - Programming language
- [GCC](https://gcc.gnu.org/) - GNU C Compiler
- [Git](https://git-scm.com/) - Version control system
- [Linux/Unix](https://www.linux.org/) - Operating system
- [Vim/Nano](https://www.vim.org/) - Text editor

## ✍️ Authors

- [@hugou74130](https://github.com/hugou74130) - Complete development of the _printf function, project architecture, specifier handling and variable argument management
- [@SaraEstelle](https://github.com/SaraEstelle) - Complete development of the _printf function, project architecture, specifier handling and variable argument management

See also the complete list of [contributors](https://github.com/hugou74130/holbertonschool-printf/contributors) who participated in this project.

## 🎉 Acknowledgements

- **Holbertonschool** for mentoring, educational resources and learning environment
- **The standard C printf function** as a source of inspiration
- **The C developer community** for best practices and advice
- Thanks to all contributors, collaborators and testers
- Inspiration from the original Holbertonschool project

## 📞 Support

If you have any questions or issues, feel free to:

- Open an [issue](https://github.com/hugou74130/holbertonschool-printf/issues)
- Check the official [printf](https://man7.org/linux/man-pages/man3/printf.3.html) documentation
- Contact the authors

---

**Last Updated:** 27 November 2025
**Status:** Active and maintained
