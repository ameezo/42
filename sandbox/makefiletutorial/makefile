CC=cc
CFLAGS=-Wall -Wextra -Werror
DFPS=header.h





%.o: %.c $(DFPS)
	$(CC) -c -o $@ $<

hello: hellofinc.o hellomake.o
	cc hellofinc.o hellomake.o -o hello

clean:
	rm *.o hello
