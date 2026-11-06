/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_persent_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 19:45:28 by aal-bann          #+#    #+#             */
/*   Updated: 2026/11/04 19:45:28 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsingned_digit_counter(unsigned int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

static void	fill_array(char *arr, int len, unsigned int n)
{
	while (len > 0)
	{
		len--;
		arr[len] = (n % 10) + 48;
		n = n / 10;
	}
}

void	put_unsigned(unsigned int n, int fd)
{
	int		len;
	char	arr[12];

	len = unsingned_digit_counter(n);
	// printf("hjjjasd%d\n" , len);
	ft_bzero(arr, 12);
	if (n == 0)
		arr[0] = '0';
	fill_array(arr, len, n);
	ft_putstr_fd(arr, fd);
}

int u_persent(va_list *arg)
{
	unsigned int	x;
	int		count;

	x = va_arg(*arg, unsigned int);
	count = unsingned_digit_counter(x);
	// printf("%ld\n" , x % 10000000000);
	put_unsigned(x , 1);
	if (count > 0)
		return (count);
	else
		return (1);
}
