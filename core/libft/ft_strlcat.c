/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:07:16 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/29 14:35:48 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>


unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	int	i;
	int	j;
	int	l;

	j = 0;
	i = 0;
	l = 0;
	while (dest[i] != '\0')
		i ++;
	while (src[l] != '\0')
		l ++;
	l = l + i;
	while ((i < size - 1 ) && src[j] != '\0')
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';

	return l;
}


// int main()
// {
// 	char	src[15] = "123456789";
// 	char	dest[8] = "banna";

// 	printf("%d\n" , ft_strlcat(dest, src, 8));
// 	printf("%s\n" , dest);


// 	char	src2[15] = "123456789";
// 	char	dest2[8] = "banna";
// 	printf("%zu\n" , strlcat(dest2, src2, 8));
// 	printf("%s\n" , dest2);
// }
