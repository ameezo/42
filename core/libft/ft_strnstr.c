/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-bann <aal-bann@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/01 18:24:33 by aal-bann         #+#    #+#              */
/*   Updated: 2026/10/20 16:05:10 by aal-bann        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	zero_array(size_t arr[])
{
	arr[0] = 0;
	arr[1] = 0;
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	arr[2];
	size_t	tmp;

	zero_array(arr);
	if (*little == '\0')
		return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			tmp = i;
			while (big[i] == little[j] && i < len)
			{
				i++;
				j++;
				if (little[j] == '\0')
					return ((char *)(big + (i - j)));
			}
			i = tmp + 1;
			j = 0;
		}
		else
			i++;
	}
	return (0);
}
// locate needle in haystack
// #include <stdio.h>
// int	main()
// {
// 	char	*haystack = "helpello world";
// 	// int	len = get_len(haystack);
// 	// printf("%d\n",len);
// 	char	*needle = "ello";
// 	printf("%s\n" , ft_strnstr(haystack , needle, -1));
// 	printf("%s\n" , strnstr(haystack , needle, -1));
// }
// test cases
// if the len is zero
// if the haystack is less a little
// if the needle is more a little
