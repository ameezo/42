/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-bann <aal-bann@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/21 16:41:22 by aal-bann         #+#    #+#              */
/*   Updated: 2026/10/20 16:14:58 by aal-bann        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*ptr = (unsigned char) c;
		ptr++;
		n--;
	}
	return (s);
}
/*int main()
{
char	arr[8] = "hello";
char	arr2[8] = "hello";
printf("my func : %s\n" , (char *)ft_memset(arr, 's', 3));
printf("original %s\n", (char *)memset(arr2, 's', 3));
// 	// im testing the overflow , should i resolve it in someway ?
printf("%s\n" , arr);
printf("%s\n" , arr2);
}*/
