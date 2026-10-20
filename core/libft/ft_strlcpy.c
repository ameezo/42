/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-bann <aal-bann@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/28 16:36:21 by aal-bann         #+#    #+#              */
/*   Updated: 2026/10/20 16:09:44 by aal-bann        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return ((unsigned int)(ft_strlen((char *) src)));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (i == size - 1 && src[i] != '\0')
		return ((unsigned int) ft_strlen((char *) src));
	return (i);
}
// int	main()
// {
// 	char	src[10] = "hellow";
// 	char	dest[10];
// 	// printf("%zu\n" , strlcpy(dest, src, 3));
// 	printf("%d\n" , ft_strlcpy(dest, src, 3));
// 	printf("%s\n" , dest);
// }
