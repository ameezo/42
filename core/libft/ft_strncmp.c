/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:23:15 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/30 16:39:09 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return 0;
	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2) && --n)
	{
		s1 ++;
		s2 ++;
	}
	return (*s1 - *s2);
}


# test it in the workstation
int	main()
{
	char	*s1 = "some";
	char	*s2 = "some\0";
	// printf("%s\n" , ft_strncmp(s1, s2, 4));
	printf("%d\n" , ft_strncmp(s1, s2, 4));
	printf("%d\n" , strncmp(s1, s2, 4));
}
