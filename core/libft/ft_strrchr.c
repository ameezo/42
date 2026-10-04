/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:44:53 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/30 16:19:14 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = 0;
	while (*s != '\0')
	{
		if (*s == c)
			ptr = ((char *)s);
		s ++;
	}
	return ptr;
}



// test it in the workstation


int	main()
{
	char	str[50] = "somethingingi";
	// printf("%s\n" , strrchr(str, 's'));
	// printf("the return value : %s\n" , fun(str));

	printf("%s\n" , ft_strrchr(str, 'i'));
}
