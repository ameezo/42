/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_persent_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 19:44:24 by aal-bann          #+#    #+#             */
/*   Updated: 2026/11/04 19:44:24 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	digit_counter(int n)
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

int	d_persent(va_list *arg)
{
	int	n;
	int	sum;

	n = va_arg(*arg, int);
	sum = digit_counter(n);
	ft_putnbr_fd(n, 1);
	// return digits_num() // digits number // a function return how many digits
	if (n > 0)
		return (sum);
	else if (n < 0)
		return (sum + 1);
	else
		return (1);
	// return (-1);
}
