/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:38:40 by aal-bann          #+#    #+#             */
/*   Updated: 2026/11/09 17:45:41 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	func(char s, va_list *arg)
{
	if (s == -1)
	{
		va_end(*arg);
		return (-1);
	}
	else if (s == 'd' || s == 'i')
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
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		l;
	va_list	args;

	va_start(args, format);
	l = 0;
	if (format == NULL)
		return (func(-1, &args));
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			l = l + func((*format++), &args);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			l++;
			format++;
		}
	}
	va_end(args);
	return (l);
}
// int	main(void)
// {
// 	int	x;
// 	x = ft_printf("%%%", 'a');
// 	printf("%d\n" , x);
// }
