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

static void	indexing(char const *s, char c, int **index)
{
	int	i;
	int	j;
	int	in_word;

	i = -1;
	j = 0;
	in_word = 0;
	while (s[++i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			index[j][0] = i;
		}
		else if (s[i] == c && in_word == 1)
		{
			in_word = 0;
			index[j][1] = i - 1;
			j++;
		}
	}
	if (s[i - 1] != c)
		index[j][1] = i - 1;
}

static void	fill_it(char const *s, int **index, char **ptr, int sub_count)
{
	int	i;
	int	start;
	int	end;
	int	k;

	start = 0;
	end = 0;
	i = 0;
	k = 0;
	while (sub_count > 0)
	{
		start = index[i][0];
		end = index[i][1];
		ptr[i] = (char *) malloc(sizeof(char) * (end - start + 1) + 1);
		k = 0;
		while (start <= end)
		{
			ptr[i][k] = s[start];
			k++;
			start++;
		}
		ptr[i][k] = '\0';
		i++;
		sub_count--;
	}
}

static void	free_indexing(int **index, int sub_strings)
{
	int	i;

	i = 0;
	while (i < sub_strings)
	{
		free(index[i]);
		i++;
	}
	free(index);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		**index;
	int		sub_count;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	sub_count = how_many_sub(s, c);
	ptr = ft_calloc(sub_count + 1, sizeof(char *));
	if (ptr == NULL || sub_count == 0)
		return (ptr);
	index = (int **) malloc(sizeof(int *) * (sub_count));
	while (i < sub_count)
	{
		index[i] = ft_calloc(2, sizeof(int));
		i++;
	}
	indexing(s, c, index);
	fill_it(s, index, ptr, sub_count);
	free_indexing(index, sub_count);
	return (ptr);
}
// int	main()
// {
// 	char	*str = "";
// 	char	**arr = ft_split(str , ' ');
// 	int	sub = 2;
// 	int	i = 0;
// 	while (i < sub)
// 	{
// 		printf("%s\n" , arr[i]);
// 		i ++;
// 	}
// 	i = 0;
// 	while (i < sub)
// 	{
// 		free(arr[i]);
// 		i ++;
// 	}
// 	free(arr);
// }
