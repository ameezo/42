/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 17:17:20 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/20 15:11:02 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	string_len;

	if (s == NULL)
		return (NULL);
	string_len = ft_strlen((char *)s);
	i = 0;
	if (start > string_len)
		return (calloc(1 , 1));
	if (len > string_len - start)
		len = string_len - start;
	ptr = (char *)calloc(sizeof(char), (len + 1));
	if (ptr == NULL)
		return (ptr);
	while (s[start] != '\0' && i < len)
	{
		ptr[i] = s[start];
		i ++;
		start ++;
	}
	return (ptr);
}
// int     main()
// {
//         char    *s = "hello";
//         char    *ptr;
//         ptr = ft_substr(s, 0 ,lenn(s) + 1);
//         printf("%s\n" , ptr);
//         free(ptr);
// }
