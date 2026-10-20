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

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cc;

	cc = c;
	while (*s != '\0')
	{
		if (*s == cc)
			return (char *)s;
		s ++;
	}
	if (*s == cc)
		return (char *)s;
	return NULL;
}
/*int main()
{
	char	*str = "sosmethsirnrg";
	printf("%s\n" , ft_strchr(str, 'r'));
	printf("%s\n" , strchr(str, 'r'));
}*/
