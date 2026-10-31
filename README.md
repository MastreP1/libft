*This project has been created as part of the 42 curriculum by omejri.*

# Libft — Custom Standard C Library

## Description

The **Libft** project is the cornerstone of the 42 curriculum's foundational programming phase. Writing software in C can be demanding without access to standard helper utilities, and this project directly addresses that challenge. The objective of Libft is to create an autonomous, general-purpose C static library (`libft.a`) that reimplements core standard C library routines, introduces extended string and memory manipulation utilities, and provides data structures for dynamic linked list management.

By reconstructing foundational functions from scratch without relying on external libraries, developers gain an intimate, mechanical understanding of memory segmentation, pointer arithmetic, dynamic heap allocation, and POSIX file descriptor I/O. Once compiled, `libft.a` serves as an indispensable utility library across subsequent 42 systems projects, including `ft_printf`, `get_next_line`, `pipex`, and `minishell`.

---

## Detailed Description of the Library

The library comprises three primary functional categories: standard Libc reimplementations, additional utility functions, and self-referential linked list manipulators.

### Part 1: Standard Libc Functions

These functions reproduce the exact prototypes and behavioral specifications of standard functions defined in POSIX and libc manual pages. Their names are prefixed with `ft_` (e.g., `strlen` becomes `ft_strlen`). Per 42 constraints, none of these functions rely on outside dependencies, and the C99 `restrict` qualifier is strictly omitted.

#### Character Classification & Conversion
These functions evaluate character types and adjust letter cases. Per the subject specification, character test routines return `1` if true and `0` if false:
* `ft_isalpha`: Tests whether a character is an alphabetic letter (returns 1 on match, 0 otherwise).
* `ft_isdigit`: Tests whether a character is a decimal digit (`0` through `9`).
* `ft_isalnum`: Tests whether a character is alphanumeric (either a letter or digit).
* `ft_isascii`: Tests whether a character fits into the 7-bit ASCII character set (values 0 through 127).
* `ft_isprint`: Tests whether a character is printable (including space).
* `ft_toupper`: Converts a lowercase letter to its uppercase equivalent.
* `ft_tolower`: Converts an uppercase letter to its lowercase equivalent.

#### String Manipulation & Search
* `ft_strlen`: Calculates and returns the number of characters in a string, excluding the terminating null byte.
* `ft_strchr`: Locates the first occurrence of a specific character in a string.
* `ft_strrchr`: Locates the last occurrence of a specific character in a string.
* `ft_strncmp`: Compares up to `n` characters of two strings lexicographically.
* `ft_strnstr`: Locates the first occurrence of a null-terminated substring within a bounded string of length `len`.
* `ft_strlcpy`: Copies up to `size - 1` characters from a source string to a destination buffer, guaranteeing null-termination.
* `ft_strlcat`: Appends a source string to a destination buffer of size `size`, ensuring proper null-termination.

#### Memory Manipulation
* `ft_memset`: Fills a contiguous memory block with a specified constant byte.
* `ft_bzero`: Erases data in a memory area by setting `n` bytes to zero (`\0`).
* `ft_memcpy`: Copies `n` bytes from a source memory area to a destination area where memory does not overlap.
* `ft_memmove`: Copies `n` bytes between potentially overlapping memory areas safely using intermediate buffering or directional scanning.
* `ft_memchr`: Scans a memory block for the first occurrence of a specific byte value.
* `ft_memcmp`: Compares byte sequences of two memory blocks.

#### Type Conversion & Dynamic Allocation
* `ft_atoi`: Converts the initial portion of a string representation to an integer.
* `ft_calloc`: Allocates heap memory for an array of `nmemb` elements of `size` bytes each and initializes all allocated bytes to zero. Per subject requirements, if `nmemb` or `size` is 0, `calloc` returns a unique pointer value that can be successfully passed to `free()`.
* `ft_strdup`: Allocates heap memory and duplicates a null-terminated string, returning a valid pointer to the duplicate.

---

### Part 2: Additional Custom Utilities

Part 2 introduces functions that either extend the standard C library or provide structured operations for string composition, formatting, and file descriptor I/O.

| Function Name | Prototype | Description |
| :--- | :--- | :--- |
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Allocates and returns a substring from string `s`, beginning at index `start` with a maximum length of `len`. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2);` | Allocates and returns a new string formed by concatenating prefix `s1` and suffix `s2`. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set);` | Allocates and returns a copy of `s1` with all prefix and suffix characters belonging to `set` removed. |
| `ft_split` | `char **ft_split(char const *s, char c);` | Allocates and returns a NULL-terminated array of strings obtained by splitting `s` using delimiter `c`. Can be freed via iterative `free()` calls followed by freeing the pointer array. |
| `ft_itoa` | `char *ft_itoa(int n);` | Converts an integer value into a dynamically allocated null-terminated string, correctly handling negative numbers and signs. |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Applies function `f` to each character of `s` (passing character index and value) to generate a newly allocated string result. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char*));` | Applies function `f` to each character of `s` by reference (passing character index and pointer address) for in-place modification. |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd);` | Writes a single character `c` directly to the specified file descriptor using the `write` system call. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd);` | Writes string `s` to the specified file descriptor. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd);` | Writes string `s` followed by a newline byte (`\n`) to the specified file descriptor. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd);` | Writes integer `n` as printable characters to the specified file descriptor. |

---

### Part 3: Linked List Manipulation

Manipulating memory arrays can be rigid. Part 3 introduces a dynamic singly-linked list structure using a self-referential structure defined in `libft.h`:

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
} t_list;
```

* `content`: A generic pointer (`void *`) holding the data payload of the node, permitting arbitrary data structures to be stored.
* `next`: The starting memory address of the next consecutive node on the heap, or `NULL` if the node represents the tail of the list.

#### Linked List Function Reference

| Function Name | Prototype | Description |
| :--- | :--- | :--- |
| `ft_lstnew` | `t_list *ft_lstnew(void *content);` | Allocates a new node with `content` set to the argument and `next` initialized to `NULL`. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new);` | Inserts the new node `new` at the beginning of the linked list. |
| `ft_lstsize` | `unsigned int ft_lstsize(t_list *lst);` | Traverses and counts the total number of nodes in the list. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst);` | Traverses the list and returns a pointer to the final node. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new);` | Traverses to the end of the list and appends node `new` to the tail. |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *));` | Deallocates a single node's `content` via the `del` function pointer and frees the node without freeing successors. |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *));` | Sequentially deletes and frees a node and all subsequent nodes, resetting the list pointer to `NULL`. |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *));` | Iterates over each node in the list and invokes function `f` upon each node's `content`. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Iterates through `lst`, creates a new list from the successive application of `f` on each node's content, and cleans up with `del` if an allocation fails. |

---

## Technical Constraints & Architecture Choices

All source implementations within this repository conform to strict systems programming guidelines:

* **No Global Variables:** Declaring global variables is strictly forbidden. Functions operate entirely through parameter passing, return values, and explicit data pointers.
* **Internal Scope Management:** Helper functions used to modularize complex algorithms are declared with the `static` storage-class specifier, restricting their linkage and symbol visibility exclusively to the defining translation unit.
* **Archive Generation:** The static archive `libft.a` is built using the standard UNIX archiver `ar` (`ar rcs libft.a $(OBJS)`). The use of `libtool` is prohibited.
* **Standard Conformance:** Code is written to standard C without C99-specific extensions (such as `restrict` or `-std=c99`).
* **Memory Safety:** Every dynamic memory allocation (`malloc`) is protected against failure. All heap-allocated memory is released when no longer required; memory leaks, segmentation faults, and double-free errors are unacceptable.
* **Root Placement:** All source files (`ft_*.c`), headers (`libft.h`), and build automation files (`Makefile`) reside directly at the root of the repository.

---

## Instructions

### Compilation & Build Rules

The library includes a compliant `Makefile` that compiles all source files using `cc` with the flags `-Wall -Wextra -Werror`. The build script avoids unnecessary relinking by validating file modification timestamps.

The Makefile supports the following standard rules:

| Target | Action |
| :--- | :--- |
| `make` / `make all` | Compiles all source files into object files (`.o`) and packages them into the static library `libft.a`. |
| `make clean` | Removes compiled intermediate object files (`.o`) from the directory. |
| `make fclean` | Removes all object files and deletes the compiled archive binary `libft.a`. |
| `make re` | Re-executes `fclean` followed by `all` to rebuild the entire library from scratch. |
| `make bonus` | Compiles and archives bonus features (such as linked list utilities) into `libft.a`. |

### Using the Library in C Projects

To integrate `libft.a` into another C program:

1. Copy the `libft/` directory containing source files, `libft.h`, and `Makefile` into your project repository.
2. In your project source files, include the header:
   ```c
   #include "libft.h"
   ```
3. Compile your project by linking against `libft.a`:
   ```bash
   cc -Wall -Wextra -Werror main.c -Llibft -lft -o my_program
   ```

---

## Resources & AI Usage Statement

### References & Documentation
* **Linux Programmer's Manual:** Standard man pages (`man 3 strlen`, `man 3 memcpy`, `man 3 malloc`, `man 2 write`).
* **The Linux Programming Interface (Michael Kerrisk):** System architecture guide for UNIX I/O, file descriptors, and process memory layout.
* **BSD Library Extensions:** Documentation regarding `strlcpy`, `strlcat`, and `bzero` implementations in BSD libc versus GNU libc (`glibc`).

### AI Usage Statement
In accordance with the 42 AI Directives outlined in Chapter III:
* **Purpose of AI Tools:** Artificial intelligence was utilized strictly as an educational sparring partner to discuss theoretical concepts (such as process memory segmentation, pointer math, and Makefile dependency chains).
* **Scope of Tasks:** AI assistance was consulted for explaining standard library behaviors, formatting Markdown documentation, and identifying potential edge cases in algorithmic slicing (such as boundary conditions in `ft_strtrim` and `ft_split`).
* **Integrity & Understanding:** All code logic, memory architectures, and function implementations were written, verified, and comprehended directly by the student to ensure genuine technical mastery and full readiness for peer evaluations and whiteboard defenses.
