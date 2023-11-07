# Structures and Typedef

This directory contains C programs that demonstrate the usage of structures and typedef in C programming.

## Files

- **0-main.c**
  - This program defines a new type `struct dog` with elements `name` (type `char *`), `age` (type `float`), and `owner` (type `char *`). It initializes a variable of type `struct dog` and prints its elements.

- **1-init_dog.c**
  - This program contains a function `init_dog` that initializes a variable of type `struct dog` with provided values for `name`, `age`, and `owner`.

- **2-print_dog.c**
  - This program contains a function `print_dog` that prints the elements of a `struct dog`. If any element is `NULL`, it prints `(nil)` instead.

- **3-dog.h**
  - This header file defines the structure `struct dog` and declares the functions `init_dog` and `print_dog`.

- **4-new_dog.c**
  - This program contains a function `new_dog` that creates a new dog with provided values for `name`, `age`, and `owner`. It returns a pointer to the new dog.

- **5-free_dog.c**
  - This program contains a function `free_dog` that frees the memory allocated for a dog created by `new_dog` function.

## Usage

To compile and run each program, use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o 0-dog
./0-dog

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o 1-init_dog
./1-init_dog

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o 2-print_dog
./2-print_dog

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o 4-new_dog
./4-new_dog

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o 5-free_dog
valgrind ./5-free_dog
```

These programs demonstrate the usage of structures and memory management in C programming.