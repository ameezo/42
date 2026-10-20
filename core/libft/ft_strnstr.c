/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:24:33 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/11 13:39:28 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// len here is the len of character to search , in the big string
// 		unless it reaches the end of the len or the null of haystack
#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	j = 0;
	i = 0;
	tmp = i;
	if (*little == '\0')
		return (char *)big;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			tmp = i;
			while (big[i] == little[j] && i < len)
			{
				i ++;
				j ++;
				if (little[j] == '\0')
					return ((char *)(big + (i - j)));
			}
			i = tmp + 1;
			j = 0;
		}else
			i ++;
	}
	return 0;
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
//
