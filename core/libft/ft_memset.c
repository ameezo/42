/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 16:41:22 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/23 12:28:07 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <string.h>
void	*ft_memset(void *s, int c, unsigned int n)
{
	int	i;
	i = 0;

	printf("the size of s %lu\n" , sizeof((char *)s));

	while (i < n-1)
	{
		((char *)s)[i] = c;
		i ++;
	}
	return s;
}


int main()
{
	char	str[6] = "s";
	char	str2[6] = "s";
	char	*ptr;
	char	*ptr2;



	printf("the size sdof s %lu\n" , sizeof(str2));

	// printf("size of %lu\n" , sizeof(char));
	// printf("%s\n" , str);
	ptr2 = ft_memset(str2, 'y',6*sizeof(char));
	ptr = memset(str, 's', 6*sizeof(char));




	printf("%s\n" , str);
	printf("%s\n" , str2);



	printf("%s\n" , ptr2);
}
