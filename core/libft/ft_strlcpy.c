/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:36:21 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/28 16:55:29 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <bsd/string.h>
#include <stdio.h>
// int	ft_strlcpy(char *dest, const char *src, size_t size)
// {

// }


int	main()
{
	char	src[10] = "hellow";
	char	dest[10];

	printf("%zu\n" , strlcpy(dest, src, 3));

	printf("%s\n" , dest);


}
