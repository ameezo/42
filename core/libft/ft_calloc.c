/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:43:37 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/11 19:19:19 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t	heap_size;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
			return (NULL);
	heap_size = nmemb * size;
	ptr = (unsigned char *)malloc(heap_size);
	if (ptr == NULL)
		return ptr;
	ft_bzero(ptr, heap_size);
	return (void *)ptr;
}
