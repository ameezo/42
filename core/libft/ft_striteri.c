/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:18:43 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/14 19:35:28 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (*s != '\0')
	{
		f(i , s);
		s ++;
		i ++;
	}
}


// void	iter(unsigned int i, char * s) {
// 	// printf("im in\n");
// 	printf("%d\n" , i);
// 	printf("%s\n" , s);
// 	*s += i;
// }


// int	main()
// {
// 	char	arr[] = "000000";
// 	ft_striteri(arr , iter);
// 	printf("%s\n" , arr);
// }
