/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 17:17:20 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/11 23:29:59 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



unsigned int	lenn(const char *s)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	int	s_len;


	s_len = ft_strlen((char *)s);
	i = 0;
	// if start is out of the scoop
	if ((s_len - 1) < (int)start)
		return malloc(0);

	if (len > s_len - start)
		len = s_len - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return ptr;
	while (s[start] != '\0' && len)
	{
		ptr[i] = s[start];
		i ++;
		start ++;
		len --;
	}
	ptr[i] = '\0';
	// printf("%s\n" , ptr); // you need debugger ±±!!!!
	return ptr;
}






// int     main()
// {
//         char    *s = "hello";
//         char    *ptr;
//         ptr = ft_substr(s, 0 ,lenn(s) + 1);
//         printf("%s\n" , ptr);
//         free(ptr);

// }
