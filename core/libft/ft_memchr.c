/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-bann <aal-bann@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/30 21:54:21 by aal-bann         #+#    #+#              */
/*   Updated: 2026/10/20 16:15:10 by aal-bann        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cc;
	size_t			i;

	i = 0;
	cc = (unsigned char) c;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		if (*ptr == cc)
			return ((void *) ptr);
		ptr++;
		i++;
	}
	return (0);
}
