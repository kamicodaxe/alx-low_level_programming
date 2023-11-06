# C - Preprocessor & Macros

This repository contains C programs demonstrating the use of preprocessor directives and macros.

## Files:

- **0-object_like_macro.h**
  - This header file defines a macro named `SIZE` as an abbreviation for the token `1024`.

- **1-pi.h**
  - This header file defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

- **2-main.c**
  - This C program prints the name of the file it was compiled from.

- **3-function_like_macro.h**
  - This header file defines a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

- **4-sum.h**
  - This header file defines a function-like macro `SUM(x, y)` that computes the sum of two numbers `x` and `y`.

## File Descriptions:

### 0-object_like_macro.h
Defines a macro `SIZE` with the token `1024`.

### 1-pi.h
Defines a macro `PI` with the token `3.14159265359`.

### 2-main.c
Prints the name of the file it was compiled from.

### 3-function_like_macro.h
Defines a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

### 4-sum.h
Defines a function-like macro `SUM(x, y)` that computes the sum of two numbers `x` and `y`.

## Usage
To compile and run the programs, use the following commands:

For **0-object_like_macro.h**:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
./a
```

For **1-pi.h**:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
./b
```

For **2-main.c**:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
./c
```

For **3-function_like_macro.h**:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
./d
```

For **4-sum.h**:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
./e
```

For any additional information or issues, please refer to the [GitHub repository](https://github.com/kamicodaxe/alx-low_level_programming/tree/main/0x0D-preprocessor).