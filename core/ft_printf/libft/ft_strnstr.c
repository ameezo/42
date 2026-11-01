/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-bann <aal-bann@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/01 18:24:33 by aal-bann         #+#    #+#              */
/*   Updated: 2026/10/20 16:25:02 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	zero_array(size_t arr[])
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
	while (arr[0] < len && big[arr[0]] != '\0')
	{
		if (big[arr[0]] == little[arr[1]])
		{
			tmp = arr[0];
			while (arr[0] < len && big[arr[0]] == little[arr[1]])
			{
				arr[0]++;
				arr[1]++;
				if (little[arr[1]] == '\0')
					return ((char *)(big + (arr[0] - arr[1])));
			}
			arr[0] = tmp + 1;
			arr[1] = 0;
		}
		else
			arr[0]++;
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
