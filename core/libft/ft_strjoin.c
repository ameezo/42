/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 23:23:22 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/12 00:42:19 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	filler(char *ptr, char const *s, int index)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ptr[index] = s[i];
		i ++;
		index ++;
	}
	ptr[index] = '\0';
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int	i;
	int	j;

	i = 0;
	j = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (ptr == NULL)
		return ptr;

	filler(ptr, s1, i);
	i = i + ft_strlen((char *)s1);
	filler(ptr, s2, i);
	return ptr;
}


// int	main()
// {
// 	char	*s1 = "abc";
// 	char	*s2 = "123";

// 	char	*ptr;
// 	ptr = ft_strjoin(s1, s2);
// 	printf("%s\n" , ptr);
// 	free(ptr);
// }
