*This project has been created as part of the 42 curriculum by aal-bann.*

# ft_printf

## Description
The **ft_printf** project is an implementation of the standard C library function `printf()`. The objective of this project is to learn about variadic functions in C (`va_start`, `va_arg`, `va_copy`, `va_end`) and write a versatile, extensible formatting library.

The library `libftprintf.a` handles the following conversion specifiers:
- `%c`: Prints a single character.
- `%s`: Prints a string of characters (prints `(null)` if pointer is `NULL`).
- `%p`: Prints a pointer address in hexadecimal format.
- `%d`: Prints a signed decimal integer (base 10).
- `%i`: Prints an integer in base 10.
- `%u`: Prints an unsigned decimal integer (base 10).
- `%x`: Prints a number in lowercase hexadecimal (base 16).
- `%X`: Prints a number in uppercase hexadecimal (base 16).
- `%%`: Prints a literal percent sign.

---

## Instructions

### Compilation & Installation
The project provides a `Makefile` supporting the following standard rules:
- `make` or `make all`: Compiles the library `libft.a` in the `libft/` subdirectory, compiles `ft_printf` sources, and archives them together into `libftprintf.a`.
- `make clean`: Removes all compiled object files (`.o`) from both the root directory and the `libft/` directory.
- `make fclean`: Cleans all object files and deletes `libftprintf.a` and `libft/libft.a`.
- `make re`: Runs `fclean` followed by `all` to perform a full re-compilation.

### Usage in C Projects
To use `ft_printf` in your own C files:

1. Include the header in your source code:
   ```c
   #include "ft_printf.h"
   ```

2. Compile your program by linking `libftprintf.a`:
   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lftprintf -o my_program
   ```

3. Run the executable:
   ```bash
   ./my_program
   ```

---

## Algorithms and Data Structures

### 1. Algorithm Overview
`ft_printf` works as a stream processor:
1. **Scanning**: It iterates character by character through the `format` string. Non-format characters are output directly to standard output using `ft_putchar_fd(c, 1)`.
2. **Specifier Dispatching**: When a `%` token is encountered, the next character is passed to a dispatcher function (`func`), which identifies the conversion specifier and routes execution to the corresponding handler (`d_persent`, `s_persent`, `ptr_persent`, etc.).
3. **Variadic Argument Consumption**: Handlers consume the matching argument using `va_arg(*arg, <type>)`, format the value, write it to file descriptor 1, and return the exact number of bytes printed.
4. **Counter Accumulation**: The main loop keeps a running total of the printed character count, returning this total at the end, or `-1` if an error occurs.

### 2. Conversions Implementation Details
- **Hexadecimal Conversion (`to_hex.c`)**: Uses recursion to divide the value by 16 until the most significant base-16 digit is reached, then prints the corresponding character from a lookup table (`"0123456789abcdef"` or `"0123456789ABCDEF"`) on the unwinding phase. This eliminates the need for dynamic string buffers.
- **Pointer Formatting (`ft_persent_hex.c`)**: Extracts the address as `(unsigned long)va_arg(*arg, void *)`. If `NULL`, it prints `(nil)` on Linux (or `0x0` on macOS). Otherwise, it outputs the `0x` prefix followed by the hexadecimal value.
- **Decimal & Unsigned (`ft_persent_d.c`, `ft_persent_u.c`)**: Values are counted and written using static stack buffers (`char arr[12]`) and division/modulo arithmetic, correctly handling edge cases such as `INT_MIN` (`-2147483648`) and `0`.

### 3. Data Structures & Justification
- **Stack Buffers (`char arr[...]`)**: All number-to-string conversions utilize fixed-size arrays on the stack (`arr[12]` for 32-bit integers, `arr[17]` for hex tables). Fixed-size stack allocation avoids dynamic heap allocation (`malloc`/`free`), ensuring \(O(1)\) memory overhead and zero memory leaks.
- **Variadic Arguments Pointer (`va_list *`)**: A pointer to `va_list` is passed across helper functions to maintain argument state across function calls without redundant list copies.

---

## Resources

### References
- `man 3 printf`: Standard POSIX documentation for formatted output conversion.
- `man 3 stdarg`: Documentation for variable argument lists (`va_start`, `va_arg`, `va_end`).
- 42 School `ft_printf` subject specification.
- Test suites:
  - [Tripouille/printfTester](https://github.com/Tripouille/printfTester)
  - [paulo-santana/ft_printf_tester](https://github.com/paulo-santana/ft_printf_tester)

### Use of AI
AI assistance was utilized for the following aspects of this project:
- **Test Suite Investigation**: Cloning, configuring, and analyzing automated test suites (`printfTester` and `ft_printf_tester`) against the codebase.
- **Portability Analysis**: Investigating platform-specific behaviors of libc `printf` (e.g., `%p` null pointer output difference between Linux `(nil)` and macOS `0x0`).
- **Makefile Architecture**: Structuring the multi-Makefile integration between the root library and the sub-library `libft` without unnecessary relinking and adhering to 42 guidelines.
- **Documentation**: Structuring this `README.md` to satisfy all 42 subject evaluation requirements.

