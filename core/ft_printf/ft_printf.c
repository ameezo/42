/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:38:40 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/22 12:38:40 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"
#include <stdio.h>
// #include <cstdarg.h>

// im cuirous about the time when returning -1 on an error or something , but i think it is an malloc things
// specification -- > s
// in this function , i should check what percent type is it


int	d_persent(va_list arg)
{
	ft_putnbr_fd(va_arg(arg, int) , 1);
	// return digits_num() // digits number // a function return how many digits
	return (1);
}

int	c_persent(va_list arg)
{
	ft_putchar_fd((va_arg(arg, int)), 1);
	return (1);
}

int	s_persent(va_list arg)
{
	char	*ptr;

	ptr = va_arg(arg, char *);
	ft_putstr_fd(ptr, 1);
	return (ft_strlen(ptr));
}

int	persent_persent(va_list arg)
{
	ft_putchar_fd('%', 1);
	return (1);
}

int	func(char  s, va_list arg)
{

	// functions call for each one to print it ,
	// like : if d -- > put nbr va_args(args, int);
	// also , there is no one check if the error accours here if (va_args(args, int) != int) or something
	if (s == 'd')
		return (d_persent(arg));
	else if (s == 'c')
		return (c_persent(arg));
	else if (s == 's')
		s_persent(arg);
	else if (s == '%')
		return (persent_persent(arg));
	// else if (s == 'x')

	// im testing these for now and thats enough for today
	// im going to do something else
	// 22 / 10 / 2026 2:58PM


	return (0);
}


int	ft_printf(const char *format, ...)
{
	int	i;
	int	l;
	va_list	args;
	va_start(args, format);

	i = 0;
	l = 0;
	while (format[i] != 0)
	{
		if (format[i] == '%')
		{
			l = func(format[i+1] , args);
			i ++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			l ++;
		}
		i ++;
	}
	va_end(args);
	return (l);
}

int	main()
{
	int	x , y;

	y = 0;
	x = 0;
	int	a , b;
	a = 0;
	// b = 5;
	// int	plus = a + b;
	// y = printf("" , a);

	// x = ft_printf("ggg\v\nc");
	x = ft_printf("%d" , 123456);
	y = printf("%d" , 123456);
	printf("\n");
	printf("\n");
	// y = printf("%d\n" , +-+123);
	// y = printf("%-d\n" , -12);
	// y = printf("%+d\n" , 12);
	// y = printf("%d\n" , 12 , 3 , 4);
	// y = printf("b\nb");
	// y = printf("");
	// y = printf("%s\n" , 5000000000);
	printf("%d" , x);
}
