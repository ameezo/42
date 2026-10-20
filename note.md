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

also you can cast with the unsigned int
unsigned char
unsgined something
ss1 = (unsigned char *)s1;



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




```bash
git stash # remove uncommited files from the current branch
```


```bash
git merge # merge two branchs
```



## strchr Vs strrchr
```c
char	*str = "sometihing";
```

strchr # return the first occurrence of the character
for example , we want the first view of i , the function returns pointer pointed to "ihing"

strrchr # return pointer to the last occurrence of the character

return : "ing"


#### const char
```c
const char *
```

“Through this pointer, you are not allowed to modify the characters.”



// try experement on pointers and const pointer to take the full understanding




dynamic allocation
https://www.youtube.com/watch?v=R0qIYWo8igs
https://www.youtube.com/watch?v=SKBnxCq3HvM




visualization of memory allocation
https://www.youtube.com/watch?v=SuBch2MZpZM




```c
int something = 3;

char *ptr = malloc(something * sizeof(*ptr));


char *ptr = malloc(something * sizeof(char));
int *ptr = malloc(something * sizeof(int));
long *ptr = malloc(something * sizeof(long));
```


how to use Valgrind
https://www.youtube.com/watch?v=DyqstSE470s
https://www.youtube.com/watch?v=bb1bTJtgXrI

```c
cc main.c -o main -g
```

```bash
valgrind ./main
```

```bash
valgrind --leak-check=full ./main
```



```bash
valgrind -s --leak-check=full ./main
```



```c
char	*ptr;

	ptr = ft_calloc(4, sizeof(char));
	int n = 4;
	while (*ptr == 0 && n--)
	{
		printf("this is null\n");
		if (n != 0)
			ptr ++;
	}

	printf("%s\n" , ptr);
```



###### calling malloc of zero
reserving zero size in the heap
```c

malloc(0);
```
According to the specifications, malloc(0) will return either "a null pointer or a unique pointer that can be successfully passed to free()".

https://stackoverflow.com/questions/2022335/whats-the-point-of-malloc0



for later things
### deallocate , release the allocation function
https://www.youtube.com/watch?v=zHHhcdRzLcc





### make file

```c

// this is instead of the #include "header.h"
int	add(int a, int b);
int sub(int a, int b);
int	main()
{

}
```

<!-- the header file is only contain the prototype of the functions
you can type the prototype manually and use the called functions
 -->


// how to compile
```bash
cc -c mymath.c -o mymath.o
cc -c main.c -o main.o
cc main.o mymath.o -c main
```


### .a files
i will learn more about library and compile them together and the .a file
https://stackoverflow.com/questions/10454263/command-to-compile-c-files-with-a-files



## 2d array
```c
int	arr[4][4] = {{1 , 2 , 3 , 4} , {1, 2, ....}}
```

## dynamic 2d array
https://www.youtube.com/watch?v=aR7tkVj3UU0
allocate 2d array with 3 rows and columns
3 * 3
-------------
|	|	|	|
-------------
|	|	|	|
-------------
|	|	|	|
-------------


what you are doing is to allocate a pointers holder , that each point to strings
allocate an array of pointer , and each pointer point to string

```c
int	**ipp;
int	i;

i = 0;
ipp = (int **)malloc(row * sizeof(int*));

while(i < row)
{
	ipp[i] = (int *)malloc(col * sizeof(int));
	// fill it with ipp[i][0 - col]
	i ++;
}
```


frustrated making the ft_split,



function called in the parameter
##  pass a function as a parameter in C
https://jraleman.medium.com/c-programming-language-passing-a-function-as-a-parameter-90d52fe842ea

https://www.w3resource.com/c-programming-exercises/c-snippets/how-do-you-pass-a-function-as-a-parameter-in-c.php

https://stackoverflow.com/questions/9410/how-do-you-pass-a-function-as-a-parameter-in-c


https://stackoverflow.com/questions/9410/how-do-you-pass-a-function-as-a-parameter-in-c#9413

https://math.hws.edu/bridgeman/courses/331/f05/handouts/c-c++-notes.html

ざんえん　です , i didnt understood anything about that ! 😢



It’s recommended to create functions that can work with a variety of parameter types. You can do this by declaring the parameter to by of type void *, and then casting the appropriate type in the function body, i.e.: void (*f)(int)



In C language, it is possible to pass a function as a parameter to another function using function pointers.


what i did understood

```c
// here is a function
int	add(a, b)
{
	return a + b;
}

void	print()
{
	printf("something\n");
}

void	myfunction(int x, void (*f)(int , int))
{
	printf("%d\n" , f(x, x));
}
// this function is like
// void	myfunction(int x, function)


// so function is an internal function define in the argument , so the function should have a prototype and argument to pass in

// assume it
void	function(int value, int another_value)

// just like that


int	main()
{
	myfunction(4, add)
}
```

the casting is not working as i expected


also it worked like that
```c
void	myfunction(int x, int (f)(int , int))
{
	printf("%d\n" , f(x, x));
}
```



```c


void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (*s != '\0')
	{
		f(i , s);
		s ++;
		i ++;
	}
}
```

idk about this shi
it is the same , in f you can use the i and the s together in s[i] = ....
it is not a pointer or const value , it is an array you can modify .
also how could i guess that i have to walk through characters using the first index of the pointer *s , s ++




## file descriptor
https://www.youtube.com/watch?v=btT4HDKNIOw
https://www.youtube.com/watch?v=crd2hgzBVTo
https://www.youtube.com/watch?v=saMebwRO-Q8 // she talks alot
https://www.youtube.com/watch?v=rW_NV6rf0rM
https://www.youtube.com/watch?v=KM5sRWAYqaw




0 -- > stdout
1 -- > stdint
2 -- > stderr
3
.
.
.
is others file descriptors

my question is , can i use the write function on not fd = 1 ?

## struct
```c
struct Car
{
	int		num;
	int		model;
	char	name[10];
}
```
https://www.youtube.com/watch?v=dqa0KMSMx2w


## typedef


```c
typedef struct
{
	int		num;
	int		model;
	char	name[10];
}Car;
```

#### memcpy in struct
```c
Car c1;
Car c2;

c2 = c1;
```




#### pointer in struct

```c
typedef struct
{
	int *ptr;
}Data;

int main()
{
	Data x;

	x.ptr = malloc(sizeof(int) * 4);
	x.ptr[0] = 1;
	x.ptr[1] = 2;
	x.ptr[2] = 3;
	x.ptr[3] = 4;
}

// this is so wrong
x = y;
```



instead of (*ptr).data

ptr->member is 100% identical to (*ptr).member.



```c
	while (ptr -> next)
	{
		printf("%d\n" , *(int *)(ptr -> data));
		ptr = ptr -> next;
		// so , -> is the same as (*ptr).next
	}
```

why ? why it works ?
the ptr is a pointer from that type of datatype , it is a struct pointer

a pointer have two operations
1. reference ptr = &a , ptr = something 
2. dereference *ptr

in the way before , adding so much parentheses because the priority , when the compiler sees "." before the dereference , so it goes wrong a little


if the current node is the last , so it store null
ptr -> next != NULL


https://gemini.google.com/app/cb78ec25b16200ad



i like the way while im reserving nodes and somethings
dont forget to free the node after using it

front mean head
so new node will be on the first not on the last , walking through the list is waste of time


```c
// printf("hellow");
	// printf("%d\n" , (*(int *)(*ptr).content));
	// printf("%p\n" , (*ptr).next);

	// printf("%p\n" , (*ptr).next);
	// printf("second node , second value : %d\n" , ((int *)(ptr->next)->content)[1]);
}
```


## add to the front of the linked list





// How the delete function works ?

// how to edit on the content of the list



// how to copy linkedlist




in memcmp ,or mem something , we do not compare with != '\0'
because there is a lot of null or 0 character value
