*This project has been created as part of the 42 curriculum by aal-bann.*

# Libft - Your Very First Own Library

## Description

**Libft** is the inaugural project of the 42 core curriculum. The objective of this project is to recreate a wide variety of standard C library (`libc`) functions from scratch, alongside additional utility functions for memory management, string manipulation, and singly linked lists.

Writing these functions from the ground up provides deep insight into fundamental data structures, memory allocation (`malloc`, `free`), pointer arithmetic, and algorithmic edge cases. The resulting static library (`libft.a`) serves as a personal, reliable toolkit for subsequent C projects at 42 where the standard C library is restricted.

---

## Detailed Description of the Library

The library compiles into a static archive `libft.a` and comprises three core functional categories:

### 1. Libc Re-implementations (Part 1)
Functions that replicate standard libc behavior adhering strictly to man page specifications:
* **Character Checks & Conversions:**
  * `ft_isalpha`: Checks for an alphabetic character (returns 1 or 0).
  * `ft_isdigit`: Checks for a digit (0 through 9) (returns 1 or 0).
  * `ft_isalnum`: Checks for an alphanumeric character (returns 1 or 0).
  * `ft_isascii`: Checks whether character fits in the ASCII character set (returns 1 or 0).
  * `ft_isprint`: Checks for any printable character including space (returns 1 or 0).
  * `ft_toupper`: Converts a lowercase letter to uppercase.
  * `ft_tolower`: Converts an uppercase letter to lowercase.
* **Memory Manipulation:**
  * `ft_memset`: Fills a byte string with a constant byte.
  * `ft_bzero`: Erases data in the memory area by writing zeros.
  * `ft_memcpy`: Copies bytes between non-overlapping memory areas.
  * `ft_memmove`: Copies bytes between memory areas that may overlap safely.
  * `ft_memchr`: Scans memory for the first occurrence of a byte.
  * `ft_memcmp`: Compares memory areas byte by byte.
  * `ft_calloc`: Allocates zero-initialized memory for an array with integer overflow protection.
* **String Operations:**
  * `ft_strlen`: Calculates the length of a null-terminated string.
  * `ft_strchr`: Locates the first occurrence of a character in a string.
  * `ft_strrchr`: Locates the last occurrence of a character in a string.
  * `ft_strncmp`: Compares two strings up to `n` characters.
  * `ft_strlcpy`: Copies a string to a specific size buffer with guaranteed null-termination.
  * `ft_strlcat`: Concatenates strings to a specific size buffer with guaranteed null-termination.
  * `ft_strnstr`: Locates a substring within a string up to `len` characters.
  * `ft_strdup`: Duplicates a string by allocating dynamic memory.
  * `ft_atoi`: Converts an initial string representation of an integer to an `int`.

### 2. Additional Utility Functions (Part 2)
Functions not present in the standard libc or implemented in an alternative form:
* `ft_substr`: Extracts a substring from a string starting at index `start` up to `len` characters.
* `ft_strjoin`: Concatenates two strings into a newly allocated string.
* `ft_strtrim`: Trims all characters specified in `set` from the beginning and end of a string.
* `ft_split`: Splits a string into an array of newly allocated strings separated by delimiter `c`.
* `ft_itoa`: Converts an integer into its string representation (handles negative numbers and `INT_MIN`).
* `ft_strmapi`: Applies a function to each character of a string to create a new string.
* `ft_striteri`: Applies a function to each character of a string, passing its index and pointer for in-place modification.
* `ft_putchar_fd`: Outputs a single character to a given file descriptor.
* `ft_putstr_fd`: Outputs a string to a given file descriptor.
* `ft_putendl_fd`: Outputs a string followed by a newline to a given file descriptor.
* `ft_putnbr_fd`: Outputs an integer to a given file descriptor.

### 3. Linked List Utilities (Part 3)
Functions designed to create, traverse, and manage dynamic singly linked lists (`t_list`):
* `ft_lstnew`: Creates and initializes a new list node with content.
* `ft_lstadd_front`: Prepends a node to the beginning of the list.
* `ft_lstsize`: Counts the number of nodes in the list.
* `ft_lstlast`: Retrieves the last node of the list.
* `ft_lstadd_back`: Appends a node to the end of the list.
* `ft_lstdelone`: Deletes and frees a single node using a provided deleter function.
* `ft_lstclear`: Deletes and frees an entire list and sets its head pointer to `NULL`.
* `ft_lstiter`: Iterates through the list and applies a function to each node's content.
* `ft_lstmap`: Iterates through a list, applies a function to content, and creates a newly mapped list.

---

## Instructions

### Requirements
* Operating System: Linux or macOS
* Compiler: `cc` (`clang` or `gcc`) with flags `-Wall -Wextra -Werror`
* Build Tool: `make`

### Compilation & Build Commands

Build the library archive `libft.a`:
```bash
make
```

Build the library including linked list utilities:
```bash
make bonus
```

Clean object files (`.o`):
```bash
make clean
```

Remove object files and `libft.a`:
```bash
make fclean
```

Recompile the entire project from scratch:
```bash
make re
```

### Usage in an External Project

To use `libft.a` in a C program:

1. Include the header in your C source file:
```c
#include "libft.h"
```

2. Compile your program by linking the static archive:
```bash
cc -Wall -Wextra -Werror main.c -L. -lft -I. -o my_program
```

---

## Resources

### Documentation & References
* [Linux Standard Man Pages (man7.org)](https://man7.org/linux/man-pages/)
* [BSD String Functions Documentation (strlcpy, strlcat)](https://www.freebsd.org/cgi/man.cgi)
* [Function Pointers in C - Guide and Reference](https://jraleman.medium.com/c-programming-language-passing-a-function-as-a-parameter-90d52fe842ea)
* [42 Norm Guidelines (Norminette v3)](https://github.com/42School/norminette)

---

## AI Usage

In accordance with 42 curriculum guidelines regarding artificial intelligence (Chapter III), AI was integrated purposefully as a learning assistant and code review partner rather than a shortcut or code generator. The foundational philosophy at 42 emphasizes authentic technical understanding and problem-solving capability, which is essential for in-person evaluations and paper/closed-environment exams.

### Tasks & Project Parts Where AI Was Consulted

1. **Understanding Subtle Libc Standards & Edge Cases:**
   * **`calloc` Behavior:** AI was consulted to clarify edge-case behaviors across Unix systems, specifically when allocating zero elements (`nmemb == 0` or `size == 0`) and guarding against multiplication integer overflow on 64-bit platforms.
   * **`strlcat` / `strlcpy` Buffer Truncation:** AI assisted in analyzing BSD man page standards, particularly how functions behave when a destination buffer has `size == 0` (ensuring that `dest` is not dereferenced when size is zero).
   * **Linked List Null-Content Handling (`ft_lstnew`):** Clarifying that node content may legitimately be `NULL` (e.g. sentinel or empty payload nodes) and should not prevent node creation.

2. **Edge Case Brainstorming & Test Scenario Generation:**
   * **`ft_split`:** Brainstorming edge scenarios such as leading/trailing delimiters, contiguous delimiter chains, empty strings (`""`), single character words, and allocation failures during intermediate splits to verify that `free_all` prevents all memory leaks.
   * **`ft_strtrim`:** Validating boundary conditions where the input string consists entirely of characters in `set`, or when `set` or `s1` is empty.

3. **Norminette & Formatting Guidance:**
   * Understanding Norminette v3 parsing rules regarding preprocessor directive indentation (`# define`, `# include` inside header guards) and keeping function line counts strictly within the 25-line limit without sacrificing readability.

### Learning Reflection & Peer Collaboration
AI was treated as an interactive reference to challenge assumptions and verify corner cases. Every single function was authored, tested, and verified locally by the student. Peer-to-peer discussions and peer evaluations remain the core methodology for exchanging algorithmic perspectives and validating our code.
