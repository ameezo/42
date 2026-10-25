/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-bann <aal-bann@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/12 14:12:44 by aal-bann         #+#    #+#              */
/*   Updated: 2026/10/20 15:43:07 by aal-bann        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	if (set == NULL || s1 == NULL)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_calloc(1, 1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end], set))
		end--;
	ptr = ft_substr(s1, start, (end - start + 1));
	return (ptr);
}
// int	main()
// {
//   char  *s;
//   char  *set;
//   s = "   xxxtripouille";
//   set = " x";

//   // printf("%s\n" , ft_strtrim(s, set));
//   char	*ptr;
//   ptr = ft_strtrim(s , set);
//   printf("%s\n" , ptr);
//   free(ptr);
// }
