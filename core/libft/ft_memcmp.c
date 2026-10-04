/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:56:48 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/01 18:23:48 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;

	if (n == 0)
		return 0;

	while ((*ss1 != '\0') && (*ss2 != '\0') && --n && *ss1 == *ss2)
	{
		ss1 ++;
		ss2 ++;
	}
	return *ss1 - *ss2;

}

int	main()
{
	char	*s1 = "1soethin";
	char	*s2 = "omething";
	printf("%d\n" , ft_memcmp(s1, s2, 0));
	printf("%d\n" , memcmp(s1, s2, 0));
}

