# printf note

i want to convert ptr to hex to print it
so , let's observe

```c
int	*ptr;
int	*ptr2;

ptr = &x;
ptr2 = &x;
```


i did the recursion hex conversion , with the unsigned long so that 8 byte is doing well



print(" %p ", -1)


with ft_putstr_fd(NULL , 1);
what would happen ?
in the function , it is something like :

```c
	while(str[i] != '\0')
```
but the str itself is a NULL
so , the sol
```c
if (ptr == NULL)
	// handle it
```
