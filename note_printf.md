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
