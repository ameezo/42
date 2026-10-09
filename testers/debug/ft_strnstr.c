/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:24:33 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/04 17:04:12 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
// len here is the len of character to search , in the big string
// 		unless it reaches the end of the len or the null of haystack
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (*little == '\0')
		return (char *)big;

	while (big[i] != '\0' && len)
	{
		if (big[i] == little[j])
		{
			while (big[i] == little[j] && len != 0)
			{
				i ++;
				j ++;
				len --;
				if (little[j] == '\0')
					return ((char *)(big + (i - j)));
			}
			j = 0;
		}
		i ++;
		len --;
	}
	return 0;
}
// locate needle in haystack

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return i;
}

int	main()
{
	char	*haystack = "some123some1231234";
	int	len = get_len(haystack);
	printf("%d\n",len);
	char	*needle = "1234";
	printf("%s\n" , ft_strnstr(haystack , needle, len));
	printf("%s\n" , strnstr(haystack , needle, len));
}


// test cases
// if the len is zero
// if the haystack is less a little
// if the needle is more a little
//
