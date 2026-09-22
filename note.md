~/42/
├── core/       # one git repo per project (cloned from vogsphere)
├── sandbox/    # all temporary tests and experiments
└── testers/    # tester repos (francinette, etc.)
~/dotfiles/     # your configs repo


Your functions should not quit unexpectedly (segmentation fault, bus error, dou-
ble free, etc.)
what is double free ?

 - If the subject requires it, you must submit a Makefile that compiles your source
files to the required output with the flags -Wall, -Wextra, and -Werror, using cc.
Additionally, your Makefile must not perform unnecessary relinking.

- Your Makefile must contain at least the rules $(NAME), all, clean, fclean and re.



libft
- .a file extentions
- make file
- headers
- ar command

For example, strlen becomes ft_strlen
Some functions that you must reimplement, such as strlcpy, strlcat,
and bzero, are not included by default in the GNU C Library (glibc).
To test them against the system standard, you may need to include
<bsd/string.h> and compile with the -lbsd flag



## testing in the sandbox
```bash
cc -Wall -Wextra -Werror -I ~/42/core/libft main.c ~/42/core/libft/strlen/ft_strlen.c -o test
```




#### type casting



#### void pointer in c
```c
void	*something(void *s)
```
store the address of any data dype


- A void pointer can hold the address of variables of any data type.
- Before accessing the value stored at a void pointer, it must be explicitly typecast to the appropriate pointer type.


pointer arithmetic cannot be performed directly on void pointers because the size of the pointed object is unknown. However, some compilers such as GCC allow pointer arithmetic on void pointers by treating the size of void as 1 byte.

// Increment the pointer by the size of an integer
```c
ptr = ptr + sizeof(int);
```

#### what is size_t in c




https://www.reddit.com/r/C_Programming/comments/18z64qg/void_function_pointer/


https://www.gnu.org/software/c-intro-and-ref/manual/html_node/Void-Pointers.html


https://stackoverflow.com/questions/18899856/calling-function-pointed-by-void-pointer


