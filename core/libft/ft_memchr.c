/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:54:21 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/11 19:09:30 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// something t 10

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cc;
	size_t i;

	i = 0;
	cc = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (*ptr == cc)
			return (void *)ptr;
		ptr ++;
		i ++;
	}
	return 0;
}

// int	main()
// {
// 	char	*str = "something";
// 	// what if the c = '\0' , what it should return ?
// 	printf("%s\n" , (char *)ft_memchr(str , '\0' , 10));
// 	printf("%s\n" , (char *)memchr(str , '\0' , 10));
// }
