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

#include <stdlib.h>
int	to_hex(unsigned long n , char s);
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


int	persent_ptr(va_list arg)
{
	unsigned long	n;

	n = va_arg(arg, int);
	if (n == 0)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	ft_putstr_fd("0x1", 1);
	return (to_hex(n , 0) + 3);
	// return (to_hex(n)); assume that the to_hex also count the printed characters
	// the ptr len is 11 character but the printf return 12 as return value ...
	// and i want to make myfucntion print 0x0 as same as printf
	return (-1); // error
}


int	x_persent(char s, va_list arg)
{
	// if (s == 'X')
	// 	return (to_hex(va_arg(arg, int) , 0));
	// else
	// 	return (to_hex(va_arg(arg, int) , 0));
	return (to_hex(va_arg(arg, int) , s));
	return (-1);
}

int	func(char  s, va_list arg)
{

	// functions call for each one to print it ,
	// like : if d -- > put nbr va_args(args, int);
	// also , there is no one check if the error accours here if (va_args(args, int) != int) or something
	if (s == 'd' || s == 'i') // check if i is the same thing as d
		return (d_persent(arg));
	else if (s == 'c')
		return (c_persent(arg));
	else if (s == 's')
		s_persent(arg);
	else if (s == '%')
		return (persent_persent(arg));
	else if (s == 'p')
		return (persent_ptr(arg));
	else if (s == 'x' || s == 'X')
		return (x_persent(s, arg));

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
			// if the ptr contain 0 , i returned -1
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
	int	*ptr;
	int	*ptr2;
	int	x , y;

	ptr = &y;
	ptr2 = &y;
	ptr = NULL;
	// char	*mal = ft_calloc(3 , sizeof(char));

	y = 0;
	x = 0;
	int	a , b;
	a = 0;
	// b = 5;
	// int	plus = a + b;
	// y = printf("" , a);

	// x = ft_printf("ggg\v\nc");
	// x = ft_printf("%d\n" , 123456);
	// y = printf("%d" , 123456);

	// x = ft_printf("%p\n" , ptr);
	// y = printf("%d\n" , ptr);
	// y = printf("%X\n" , ptr);
	// y = printf("%p\n" , ptr);
	// y = printf("%d\n" , +-+123);
	// y = printf("%-d\n" , -12);
	// y = printf("%+d\n" , 12);
	// y = printf("%d\n" , 12 , 3 , 4);
	// y = printf("b\nb");
	// y = printf("");
	// y = printf("%s\n" , 5000000000);


	// x = ft_printf("%p\n" , ptr2);
	// y = printf("%p\n" , ptr2);
	//
	//

	x = ft_printf("%X\n" , 1234);
	y = printf("%X\n" , 1234);
	printf("%d\n" , x);
	printf("%d" , y);
}
