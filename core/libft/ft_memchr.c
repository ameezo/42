/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:54:21 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/01 17:55:55 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// something t 10

void	*ft_memchr(const void *s, int c, size_t n)
{
	// what is that the character from c is coming as nigative value ?
	char	*ptr;
	unsigned char	ss;

	ss = c;
	// printf("%c\n" , ss);

	ptr = (char *)s;
	while (--n && (*ptr != '\0'))
	{
		if (*ptr == c)
			return ptr;
		ptr ++;
		if (c == '\0' && *ptr == '\0')
			return ptr;
	}
	return 0;
}

int	main()
{
	char	*str = "something";
	// what if the c = '\0' , what it should return ?
	printf("%s\n" , (char *)ft_memchr(str , '\0' , 10));
	printf("%s\n" , (char *)memchr(str , '\0' , 10));
}
