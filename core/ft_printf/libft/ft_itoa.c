/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 09:22:17 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/20 15:12:54 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len ++;
	else if (n == 0)
		return (1);
	while (n)
	{
		len ++;
		n = n / 10;
	}
	return (len);
}

static void	fill(char *ptr, int n, int len)
{
	ptr[len] = '\0';
	len --;
	while (n != 0)
	{
		if (n < 0)
			ptr[len] = ((n % 10) * -1) + 48;
		else
			ptr[len] = ((n % 10)) + 48;
		n = n / 10;
		len --;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;

	len = digit_count(n);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (ptr);
	if (n < 0)
		ptr[0] = '-';
	if (n == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	fill(ptr, n, len);
	return (ptr);
}
