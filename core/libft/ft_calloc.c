/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:43:37 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/09 11:48:06 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int	i;
	int	heap_size;


	heap_size = nmemb * size;
	i = 0;
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);
	while (heap_size--)
	{
		((char *)ptr)[i] = '\0';
		i ++;
	}
	return ptr;
}

// int	main()
// {
// 	char	*ptr;

// 	ptr = ft_calloc(0, sizeof(char));
// 	int n = 4;
// 	while (*ptr == 0 && n--)
// 	{
// 		printf("this is null\n");
// 		if (n != 0)
// 			ptr ++;
// 	}

// 	printf("%s\n" , ptr);

// 	// int	*ptr;
// 	// ptr = ft_calloc(4, sizeof(int));

// 	// printf("%d\n" , *(ptr));
// 	// printf("%d\n" , *(ptr + 1));
// 	// printf("%d\n" , *(ptr + 2));
// 	// printf("%d\n" , *(ptr + 3));

// 	free(ptr - 3);
// }
