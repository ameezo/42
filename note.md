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




## void

#### void
```c
void	print_array(int arr[], int len)
{
	int	i;
	i = 0;

	while (i < len)
	{
		printf("%d\n" , arr[i]);
		i ++;
	}
}
```


#### void pointer
```c
int	main()
{
	int	x;
	x = 5;

	double	d;
	d = 12.3;

	int	*ptr;
	ptr = &d; // warning and error
}
```

define :
```c
	void	*p;
	p = &a;
	p = &d;
```

dereference
```c
// you cannot dereference the void pointer
	// printf("%d\n" , *p);


// to print it
	printf("%f\n" , *(double *)p);
```




pointer arithmatic
```c
char	str[] = "something";
char	*ptr = str;
ptr ++; // this is true
```



there is a catch , the size of the void is 8 byte but the int is 4 byte




#### void pointer in c
```c
void	*something(void *s)
```
store the address of any data dype


- A void pointer can hold the address of variables of any data type.
- Before accessing the value stored at a void pointer, it must be explicitly typecast to the appropriate pointer type.

	- any object file
	- even functions

pointer arithmetic cannot be performed directly on void pointers because the size of the pointed object is unknown. However, some compilers such as GCC allow pointer arithmetic on void pointers by treating the size of void as 1 byte.

// Increment the pointer by the size of an integer
```c
ptr = ptr + sizeof(int);
```

void in c
It represents a pointer to we-don’t-say-what.

```c
void	*numbered_slot_pointer(int);
```
declares a function numbered_slot_pointer that takes an integer parameter and returns a pointer, but we don’t say what type of data it points to.


reference and dereference
```c
int	*p;

p = numberd_slot_pointer(int);
```


```c
int	x;
x = 10;

void	*ptr;
ptr = &x



printf("%d\n" , *(int*)ptr);
```


```c
void	print()
{
	printf("something");
}



int	main()
{
	void	*genericPointer;

	genericPointer = print;
	// genericPointer(); wrong call
	((void(*) ())genericPointer)() // good call
}
```


int malloc
```c
int *num;
num = (*int)malloc(sizeof(int))
```


#### what is size_t in c




https://www.reddit.com/r/C_Programming/comments/18z64qg/void_function_pointer/


https://www.gnu.org/software/c-intro-and-ref/manual/html_node/Void-Pointers.html


https://stackoverflow.com/questions/18899856/calling-function-pointed-by-void-pointer




#### memset usage
```c++
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    memset(str + 13, '.', 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}
```

sizeof() get the memory size of the datatype inside it
int -- > 2/4 byte
float -- > 4 byte
double -- > 8 byte
char -- > 1 byte


size_t
According to the 1999 ISO C standard (C99), size_t is an unsigned integer type of at least 16 bit (see sections 7.17 and 7.18.3).



size_t is :
- an unsigned type.
- cannot represent negative values(<0).
- You use it when you are counting something,and are sure that it cannot be negative. For example, strlen() returns a size_t because the length of a string has to be at least 0.


typecast
1. way one
// (type) expression
// (type to convert to) the value

2. way two
```c
char	x = 'c';
int	num = x;
printf("%d\n" , num); // the output will be 99
```







```c
	printf("%f\n" , (double) a/b);
```
the 'a' become a double first, then devicion occours

(char *) S


