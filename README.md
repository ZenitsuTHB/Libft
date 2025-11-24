# Libft - 42 School

Welcome to the **Libft project**, My very first C library! 

## Objective

In this project, I implemented a set of basic C functions, which are similar to the standard library functions **(libc)** but from scratch as it is required in the subject. This, solidify my understanding of C programming fundamentals like string manipulation, memory handling, and working with low-level data structures.

## Table of Contents

- [Objective](#objective)

- [Key Functions to Implement](#key-functions-to-mplement)
    - [Character Checking Functions](#character-checking-functions)
    - [String Manipulation Functions](#string-manipulation-functions)
    - [Memory Management Functions](#memory-management-functions)
    - [Linked List Functions](#linked-list-functions)
    - [Conversion and Miscellaneous Functions](#conversion-and-miscellaneous-functions)
    - [File Output Functions](#file-output-functions)
- [Compilation](#compilation)
- [Usage](#usage)
- [Testing](#testing)

## Key Functions to Implement

### Character Checking Functions

These functions are responsible for checking different properties of characters, such as whether they are alphabetic, digits, or printable.

- **`ft_isalpha`**: Checks if a character is an alphabetic letter.
- **`ft_isdigit`**: Checks if a character is a digit.
- **`ft_isalnum`**: Checks if a character is alphanumeric (a letter or a digit).
- **`ft_isascii`**: Checks if a character is an ASCII character.
- **`ft_isprint`**: Checks if a character is printable.

### String Manipulation Functions

These functions help with various string operations, including measuring string length, copying, and searching.

- **`ft_strlen`**: Returns the length of a string.
- **`ft_strlcpy`**: Safely copies a string, limiting the number of characters.
- **`ft_strlcat`**: Safely appends a string to another, limiting the total length.
- **`ft_strchr`**: Finds the first occurrence of a character in a string.
- **`ft_strrchr`**: Finds the last occurrence of a character in a string.
- **`ft_strncmp`**: Compares two strings up to `n` characters.
- **`ft_strnstr`**: Finds a substring in a string, up to a maximum length.
- **`ft_strjoin`**: Concatenates two strings and returns the new string.

### Memory Management Functions

These functions are designed for memory allocation, copying, and clearing, as well as handling memory blocks.

- **`ft_memset`**: Fills memory with a specific byte.
- **`ft_memcpy`**: Copies memory from one location to another.
- **`ft_memmove`**: Safely copies memory, handling overlapping regions.
- **`ft_memchr`**: Finds the first occurrence of a byte in a memory block.
- **`ft_bzero`**: Sets a memory block to zero.

### Linked List Functions

These functions allow you to create and manipulate linked lists, which are essential for many algorithms and data structures.

To define a node in a linked list, the following structure is used :
```c
    typedef struct s_list
    {
        void *content;
        struct s_list *next;
    }  t_list;

    t_list test;

    /*"test" will be our new node.*/
```

- **`ft_lstnew`**: Creates a new node in a linked list.
- **`ft_lstadd_front`**: Adds a new node at the front of the list.
- **`ft_lstadd_back`**: Adds a new node at the back of the list.
- **`ft_lstclear`**: Clears a list, deleting all nodes.


### Conversion and Miscellaneous Functions

This category contains various utility functions, such as converting strings to integers, allocating memory, and more.

- **`ft_atoi`**: Converts a string to an integer.
- **`ft_tolower`**: Converts a character to lowercase.
- **`ft_toupper`**: Converts a character to uppercase.
- **`ft_itoa`**: Converts an integer to a string.
- **`ft_calloc`**: Allocates memory for an array and initializes it to zero.
- **`ft_strdup`**: Duplicates a string.
- **`ft_bzero`**: Sets memory to zero (used for clearing memory).
- **`ft_memcmp`**: Compares two memory blocks.

### File Output Functions

These functions help output data (characters, strings, integers) to a specified file descriptor (e.g., standard output).

- **`ft_putchar_fd`**: Writes a character to a file descriptor.
- **`ft_putstr_fd`**: Writes a string to a file descriptor.
- **`ft_putendl_fd`**: Writes a string followed by a newline to a file descriptor.
- **`ft_putnbr_fd`**: Writes an integer to a file descriptor.

## Compilation
 ```bash
    make 
    make bonus
    make clean
    make fclean
    make re
 ```

## Usage

```bash
gcc -o my_project my_project.c -L. -lft
```

## Testing
```c
#include "libft.h"
#include <stdio.h>

int main() {
    char *str = "Hello, Libft!";
    printf("The length of the string is: %zu\n", ft_strlen(str));
    return 0;
}
```
