/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:08:26 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/29 15:13:52 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	**str;

	str = s;
	while (**str != '\0')
	{
		if (**str == c)
			return str;
		*str ++;
	}
	return *str;
}
int main()
{
	char	*str = "something";
	printf("%s\n" , ft_strchr(str, 't'));
}
