
#include <stdio.h>
// here is a function
int	add(int a, int b)
{
	return (a + b);
}

void	print()
{
	printf("something\n");
}

void	myfunction(int x, int (f)(int , int))
{
	printf("%d\n" , f(x, x));
}
// this function is like
// void	myfunction(int x, function)


// so function is an internal function define in the argument , so the function should have a prototype and argument to pass in

// assume it
// void	function(int value, int another_value)

// just like that


int	main()
{
	myfunction(4, add);
}
