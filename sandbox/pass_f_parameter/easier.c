
#include <stdio.h>
void printNumber(int x)
{
   printf("Hellow %d\n" , x + 1);
}
void myFunction(void (*f)(int))
{
	int	i = 0;
	while (i < 4)
	{
		f(i);
		i ++;
	}

}
int main(void)
{
    myFunction(printNumber);
    return (0);
}
