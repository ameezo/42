/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-bann <aal-bann@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/14 13:42:50 by aal-bann         #+#    #+#              */
/*   Updated: 2026/10/20 16:08:49 by aal-bann        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(sizeof(char) * (ft_strlen((char *) s) + 1));
	while (s[i] != '\0')
	{
		ptr[i] = f(i, (char) s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// int	main()
// {
// 	char	*ptr = ft_strmapi("AMeeN" , ft_tolower);
// 	printf("%s\n" , ptr);
// 	free(ptr);
// }
