


void	*func(void *s)
{

}


#include <stdio.h>

int	main()
{
	int	x;

	x = 10;

	int	*ptr;
	ptr = &x;

	// void pointer
	void	*pt;

	pt = &x;

	printf("value %d\n" , x);
	printf("ptrrr %d\n" , *ptr);
	printf("void  %d\n" , *(int*)pt);
}
