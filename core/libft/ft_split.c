/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-bann <aal-bann@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 21:53:34 by aal-bann         #+#    #+#              */
/*   Updated: 2026/10/20 16:14:40 by aal-bann        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	how_many_sub(char const *s, char c)
{
	int	i;
	int	count;
	int	f;

	i = 0;
	count = 0;
	f = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			f = 0;
		if (f == 0 && s[i] != c)
		{
			count++;
			f = 1;
		}
		i++;
	}
	return (count);
}

static void	free_all(char **ptr, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(ptr[j]);
		j ++;
	}
	free(ptr);
}


static int	get_len(char const *s, int *index , char c)
{
	int	count;

	count = 0;
	while (s[*index] != '\0' && s[*index] == c)
		(*index) ++;
	while (s[*index] != '\0' && s[*index] != c)
	{
		count ++;
		(*index) ++;
	}
	return (count);
}

static void	fill(char *ptr, const char *s, int index, int len)
{
	int	i;
	int	j;

	i = index - len;
	j = 0;
	// printf("index %d\n" , index);
	// printf("len : %d\n" , len);
	while (i < index)
	{
		ptr[j] = s[i];
		i ++;
		j ++;
	}
	ptr[j] = '\0';
}


char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		sub_count;
	int		i;
	int		index;
	int		len;

	len = 0;
	i = 0;
	index = 0;
	sub_count = how_many_sub(s, c);
	ptr = ft_calloc(sub_count + 1, sizeof(char *));
	if (ptr == NULL || sub_count == 0)
		return (ptr);
	while (i < sub_count)
	{
		len = (get_len(s , &index , c) + 1);
		ptr[i] = malloc(len * sizeof(char));
		if (ptr[i] == NULL)
		{
			free_all(ptr ,i);
			ptr = NULL;
			return (NULL); // is that NULL or ptr
		}
		fill(ptr[i] , s , index , len - 1);
		i ++;
	}
	return (ptr);
}

// int	main()
// {
// 	char	*str = "Raghad-is-the-best";
// 	char	**arr = ft_split(str , '-');
// 	int	i = 0;
// 	while (arr[i] != NULL)
// 	{
// 		printf("%s\n" , arr[i]);
// 		i ++;
// 	}
// 	// while (i > 0)
// 	// {
// 	// 	free(arr[i]);
// 	// 	i ++;
// 	// }
// 	// free(arr);
// }
