/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_persent_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 19:46:39 by aal-bann          #+#    #+#             */
/*   Updated: 2026/11/06 14:43:56 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_persent(va_list *arg)
{
	unsigned long	n; // is it long long or unsgined long

	n = va_arg(*arg, long); // is it long long or long
	// if (n == 0)
	// {
	// 	ft_putstr_fd("0x0", 1);
	// 	return (3);
	// }
	if (n == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);

	// ft_putstr_fd("0x1", 1);
	//  0xffffffffffffffff $ -- > 20 character
	//    ffffffffffffffff
	return (to_hex(n , 0) + 2);
	// return (to_hex(n)); assume that the to_hex also count the printed characters
	// the ptr len is 11 character but the printf return 12 as return value ...
	// and i want to make myfucntion print 0x0 as same as printf
	return (-1); // error , how to handle this setuation
}


int	x_persent(char s, va_list *arg)
{
	return (to_hex(va_arg(*arg, unsigned int) , s)); // why unsinged int not int ?
	// return (-1);
}
