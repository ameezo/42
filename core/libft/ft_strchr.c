/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:08:26 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/11 13:28:05 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			ptr = (char *)s;
			return ptr;
		}

			// return s; // wrong
		s ++;
	}
	return 0;
}

// test it in the workstation



// int main()
// {
// 	char	*str = "sosmethsirnrg";
// 	printf("%s\n" , ft_strchr(str, 'r'));
// 	printf("%s\n" , strchr(str, 'r'));
// }
