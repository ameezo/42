/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 10:18:55 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/25 16:18:55 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string.h>
#include <stdio.h>

// void	*memmove(void *dest, const void *src, size_t n)
// {
// 	dest[i] = src[i];
// }


int	main()
{
	char	arr[10] = "ABCDE";
	char	*src = arr ;
	char	*dest = arr + 1;

	printf("%s\n" , (char *)memmove(dest, src, 3));
	printf("%s\n" , arr);

}
