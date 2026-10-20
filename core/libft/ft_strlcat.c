/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-bann <aal-bann@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/29 14:07:16 by aal-bann         #+#    #+#              */
/*   Updated: 2026/10/20 16:10:12 by aal-bann        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen((char *) src);
	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	if (dest_len >= size)
		return (src_len + size);
	while ((src[i] != '\0') && ((dest_len + 1) < size))
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return ((dest_len - i) + src_len);
}
// size here is the size of dest
// as same as strlcpy
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
