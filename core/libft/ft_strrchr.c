/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:44:53 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/11 13:28:28 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ptr;
	unsigned char	cc;

	ptr = NULL;
	cc = c;
	while (*s != '\0')
	{
		if (*s == cc)
			ptr = ((unsigned char *)s);
		s ++;
	}
	if (*s == cc)
	{

		ptr = (unsigned char *)s;
		return (char *)ptr;
	} else if (ptr)
		return (char *)ptr;
	return NULL;
}
// int	main()
// {
// 	char	str[50] = "tripouille";
// 	printf("%s\n" , strrchr(str, 't'));
// 	printf("%s\n" , ft_strrchr(str, 't'));
// }
