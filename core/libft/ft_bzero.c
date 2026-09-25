/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 09:43:48 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/24 10:14:31 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	int	i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = '\0';
		i ++;
	}
}

int	main()
{
	char	arr[10] = "something";
	char	arr2[10] = "something";
	char	*ptr;
	char	*ptr2;

	ptr = arr;
	ptr ++;

	ptr2 = arr2;
	ptr2 ++;

	// printf("oo  v%s\n" , ptr);
	printf("%s\n" , arr);

	ft_bzero(ptr , 2);
	bzero(ptr2, 2);


	printf("%c\n" , arr[6]);
	printf("%c\n" , arr2[6]);
}
