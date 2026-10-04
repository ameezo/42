# GDB


normally , when you compile the program , you choose to do it with the -s option which make it strip
the stripped executable doest have the source code , the debug information that the gdb can show us a human readable output

so use the -g , puts debug information to our program



```
lay next
```


```
next
nexti
```




1. compile the program in the right way

```bash
gcc test.c -o a.out -g
```
```sh
	-g                      Generate source-level debug information
```
2. then debug
```zsh
gdb test.c
```


commands in gdb
```gdb
list # show the code with lines
```

```gdb
break 44 # put a break point on the line 44
```


```
clear 30 # remove breakpoint
```

```
info br
```

```gdb
disassemble main
```

```gdb
run # let you run the program in the gdb , but when reaching the break point , it lets you analyze the memory and variable
```



```bash
enter start 0
enter end 100
enter step 1

Breakpoint 1, main () at test1.c:44
44              while (start != end)
(gdb)
```

```gdb
print start # there is a variable called "start" , we want to know the value of it .......
print end
print step
```


```gdb
continue # let you skip the whole break point and run it .
```

```gdb
s
step # continue , but when trigger the break point again , it will stop
```


```
watch ? # i think this command is for a global variable
```




objectdumb


SIGSEGV : segmentation fault



change the variable value

```
set name=something
```




https://www.youtube.com/watch?v=bWH-nL7v5F4
https://www.youtube.com/watch?v=FlKXeLx1XKs

