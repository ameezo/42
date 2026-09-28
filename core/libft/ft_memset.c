/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 16:41:22 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/28 16:34:48 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n --)
	{
		*ptr = c;
		ptr ++;
	}
	return s;
}


// int main()
// {
// 	char	arr[8] = "hello";
// 	char	arr2[8] = "hello";



// 	printf("my func : %s\n" , (char *)ft_memset(arr, 's', 8*sizeof(char)));
// 	printf("original %s\n", (char *)memset(arr2, 's', 8*sizeof(char)));

// 	// im testing the overflow , should i resolve it in someway ?
// 	printf("%s\n" , arr);

// 	printf("%s\n" , arr2);
// }
