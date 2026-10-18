/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:36:21 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/11 19:08:10 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include <bsd/string.h>
#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return i;

	// you have to be edited as same as strlcat with the vulnerable things
}


// int	main()
// {
// 	char	src[10] = "hellow";
// 	char	dest[10];

// 	// printf("%zu\n" , strlcpy(dest, src, 3));
// 	printf("%d\n" , ft_strlcpy(dest, src, 3));
// 	printf("%s\n" , dest);


// }
