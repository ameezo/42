/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:38:40 by aal-bann          #+#    #+#             */
/*   Updated: 2026/11/06 15:17:37 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	func(char s, va_list *arg)
{
	if (s == -1)
	{
		va_end(*arg);
		return (-1);
	}
	if (s == 'd' || s == 'i')
		return (d_persent(arg));
	else if (s == 'u')
		return (u_persent(arg));
	else if (s == 'c')
		return (c_persent(arg));
	else if (s == 's')
		return (s_persent(arg));
	else if (s == '%')
		return (persent_persent());
	else if (s == 'p')
		return (ptr_persent(arg));
	else if (s == 'x' || s == 'X')
		return (x_persent(s, arg));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		l;
	va_list	args;

	va_start(args, format);
	i = 0;
	l = 0;
	if (format == NULL)
		return (func(-1, &args));
	while (format[i] != 0)
	{
		if (format[i] == '%')
		{
			l = l + func(format[i + 1], &args);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			l++;
		}
		i++;
	}
	va_end(args);
	return (l);
}
