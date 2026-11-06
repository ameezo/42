/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:38:40 by aal-bann          #+#    #+#             */
/*   Updated: 2026/11/06 15:11:31 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// im cuirous about the time when returning -1 on an error or something , but i think it is an malloc things
// specification -- > s
// in this function , i should check what percent type is it


int	func(char  s, va_list *arg)
{

	// functions call for each one to print it ,
	// like : if d -- > put nbr va_*args(*args, int);
	// also , there is no one check if the error accours here if (va_*args(*args, int) != int) or something
	if (s == 'd' || s == 'i') // check if i is the same thing as d
		return (d_persent(arg));
	else if (s == 'u')
		return (u_persent(arg));
	else if (s == 'c')
		return (c_persent(arg));
	else if (s == 's')
		return(s_persent(arg));
	else if (s == '%')
		return (persent_persent());
	else if (s == 'p')
		return (ptr_persent(arg));
	else if (s == 'x' || s == 'X')
		return (x_persent(s, arg));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	l;
	va_list	args;
	va_start(args, format);

	i = 0;
	l = 0;
	if (format == NULL)
		return (-1);
	while (format[i] != 0)
	{
		if (format[i] == '%')
		{
			l = l + func(format[i+1] , &args);
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

// #include <stdio.h>
// int	main()
// {
// 	int y = 0;

// 	y = ft_printf(NULL);
// 	// y =  printf(NULL);
// 	printf("\n%d" , y);
// }


// y = printf(" %p ", -1);
// y = ft_printf(" %p ", -1);
// 0xffffffffffffffff
// 0xffffffffffffffff
//
//
// s0xffffffffffffffff
// s0xffffffffffffffff


// print(" NULL %s NULL ", NULL)
	// int	*ptr;
	// int	*ptr2;
	// int	x , y;

	// ptr = &y;
	// ptr2 = &y;
	// ptr = NULL;
	// // char	*mal = ft_calloc(3 , sizeof(char));

	// y = 0;
	// x = 0;
	// int	a , b;
	// a = 0;
	// // b = 5;
	// // int	plus = a + b;
	// // y = printf("" , a);

	// // x = ft_printf("ggg\v\nc");
	// // x = ft_printf("%d\n" , 123456);
	// // y = printf("%d" , 123456);

	// // x = ft_printf("%p\n" , ptr);
	// // y = printf("%d\n" , ptr);
	// // y = printf("%X\n" , ptr);
	// // y = printf("%p\n" , ptr);
	// // y = printf("%d\n" , +-+123);
	// // y = printf("%-d\n" , -12);
	// // y = printf("%+d\n" , 12);
	// // y = printf("%d\n" , 12 , 3 , 4);
	// // y = printf("b\nb");
	// // y = printf("");
	// // y = printf("%s\n" , 5000000000);
	// // x = ft_printf("%p\n" , ptr2);
	// // y = printf("%p\n" , ptr2);
	// //
	// //
	// // x = ft_printf("%X\n" , 1234);
	// // y = printf("%X\n" , 1234);
	// // printf("%d\n" , x);
