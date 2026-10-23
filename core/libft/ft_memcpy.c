/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 10:15:29 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/28 16:22:27 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	while (n > 0)
	{
		*d = *s;
		d ++;
		s ++;
		n --;
	}
	return ((void *)dest);
}
// int	main()
// {
// 	char	arr[10] = "12345";
// 	char	*src = arr + 1;
// 	char	*dest = arr;
// 	char	arr2[10] = "12345";
// 	char	*src2 = arr2 + 1;
// 	char	*dest2 = arr2;
// 	printf("my fun %s\n" , (char *)ft_memcpy(dest , src, 2));
// 	printf("origin %s\n" , (char *)memcpy(dest2, src2, 2));
// 	printf("%s\n" , arr);
// 	printf("%s\n" , arr2);
// }
