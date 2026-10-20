/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:56:48 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/11 13:27:51 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


#include <stdio.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t	i;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;

	if (n == 0)
		return 0;
	// printf("iajnrdas");
	while (i < n - 1 && *ss1 == *ss2)
	{
		ss1 ++;
		ss2 ++;
		i ++;
	}
	return ((unsigned char)*ss1 - (unsigned char)*ss2);
}
// int	main()
// {
// 	char s2[] = {-128, 0, 127, 0};
// 	char s3[] = {-128, 0, 127, 0};
// 	printf("%d\n" , ft_memcmp(s2, s3, 4));
// 	printf("%d\n" , memcmp(s2, s3, 4));
// }
