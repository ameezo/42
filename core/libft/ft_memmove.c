/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 10:18:55 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/28 16:03:29 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	tmp;
	char	*d;
	char	*s;
	int		i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (s < d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	} else if (s > d)
	{
		while (i < n)
		{
			d[i] = s[i];
			// *d ++ = *s ++;
			i ++;
		}
	}
	return dest;
}


int	main()
{
	char	arr[10] = "ABCDEF";
	char	*src = arr;
	char	*dest = arr + 6;


	char	arr2[10] = "ABCDEF";
	char	*src2 = arr2;
	char	*dest2 = arr2 + 6;

	printf("my fun %s\n" , (char *)ft_memmove(dest , src, 10));

	printf("origin %s\n" , (char *)memmove(dest2, src2, 10));

	printf("%s\n" , arr);
	printf("%s\n" , arr2);

}
