// void pointer

#include <stdio.h>

int	main()
{
	int	a;
	a = 5;


	double	d;
	d = 12.3;


	// int	*ptr;
	// ptr = &d;

	void	*p;
	p = &a;
	p = &d;

	printf("a %d\n" , a);
	// printf("* %d\n" , *ptr);


	// void *malloc(size_t size)
	// int	*a = malloc(sizeof(int) * 10)


	// you cannot dereference the void pointer
	// printf("%d\n" , *p);


	// to print it
	printf("%f\n" , *(double *)p);

}
