
#include <stdio.h>
#include <stdlib.h>
// int	string_len(char *tmp)
// {
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 			return i;
// 		i ++;
// 	}
// 	return i;
// }



void	edit(int *tmp)
{

	tmp[0] = tmp[0] + 1;
	tmp[1] = tmp[1] + 2;
}

int	how_many_sub(char const *s, char c)
{
	int	i;
	int	count;
	int	f;

	i = 0;
	count = 0;
	f = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			f = 0;
		if (f == 0 && s[i] != c)
		{
			count ++;
			f = 1;
		}
		i ++;
	}
	return count;
}




void	sub_string_len(char const *s, char c, int *tmp)
{
	int	i;
	int	count;
	int	f;

	i = 0;
	count = 0;
	f = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			f = 0;
		if (f == 0 && s[i] != c)
		{
			count ++;
			f = 1;
		}
		if (s[i] != c)
			tmp[count - 1] ++;
		i ++;
	}
	// return count;
}

int	main()
{
	// int	*tmp = (int *)malloc(sizeof(int) * 2);
	// tmp[0] = 0;
	// tmp[1] = 0;

	// edit(tmp);

	// printf("%d\n" , tmp[0]);
	// printf("%d\n" , tmp[1]);



	// edit(tmp);

	// printf("%d\n" , tmp[0]);
	// printf("%d\n" , tmp[1]);


	// free(tmp);

	char	*s = "something-i-Like";
	int		arr[3];
	printf("%d\n" , how_many_sub(s, '-'));
	sub_string_len(s, '-', arr);
	printf("%d\n" , arr[0]);
	printf("%d\n" , arr[1]);
	printf("%d\n" , arr[2]);
}
