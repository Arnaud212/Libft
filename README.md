# Libft

Welcome to the Libft project! This project involves creating a personal library of functions in C.

## Project Objective

The goal of this project is to code a library of common functions in C, including functions from the libc (such as `strlen`, `memset`, etc.) and additional functions (such as `ft_substr`, `ft_strjoin`, etc.). You must also implement functions to manipulate linked lists.

## Project Usage

1. **Compilation**: Use the provided Makefile to compile the library. Type `make` in your terminal to generate the `libft.a` file.
2. **Including the Library**: In your future projects, include the library by adding `#include "libft.h"` and linking `libft.a` when compiling your project.
3. **Available Functions**: Use the functions defined in `libft.h` in your projects to simplify your C development.

### Usage Example

```c
#include "libft.h"

int main() {
    char *str = "Hello, World!";
    ft_putstr_fd(str, 1);
    return 0;
}
```

To compile this project with your library:

```sh
gcc -Wall -Wextra -Werror main.c -L. -lft -o my_project
```