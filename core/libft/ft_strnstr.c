/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:24:33 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/01 19:53:42 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
// len here is the len of character to search , in the big string
// 		unless it reaches the end of the len or the null of haystack
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (*needle == '\0')
		return (char *)haystack;

	while (haystack[i] != '\0' && len--)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && len != 0)
			{
				printf("haystack : %c   " , haystack[i]);
				printf("needle : %c \n" , needle[j]);
				i ++;
				j ++;
				len --;
			}

		}
		j = 0;
		i ++;
	}

	return "something";
}
// locate needle in haystack

int	main()
{
	char	*haystack = "some1234";
	char	*needle = "1234";
	printf("%s\n" , ft_strnstr(haystack , needle, 8));
	printf("%s\n" , strnstr(haystack , needle, 8));
}


// test cases
// if the len is zero
// if the haystack is less a little
// if the needle is more a little
//
