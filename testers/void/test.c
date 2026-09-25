// just make a void function


#include <stdio.h>

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


int	main()
{
	int	numbers[] = {1, 2, 3, 4, 5};
	print_array(numbers, 3);
}
