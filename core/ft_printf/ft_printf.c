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

#include <stdlib.h>
int	to_hex(unsigned long n , char s);
// #include <cstd*arg.h>

// im cuirous about the time when returning -1 on an error or something , but i think it is an malloc things
// specification -- > s
// in this function , i should check what percent type is it


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



// ---
// ---
// put number to put unsingned
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

// ---
// ---
// put number to put unsingned
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


int	c_persent(va_list *arg)
{
	ft_putchar_fd((va_arg(*arg, int)), 1);
	return (1);
}

int	s_persent(va_list *arg)
{
	char	*ptr;

	ptr = va_arg(*arg, char *);
	if (ptr == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(ptr, 1);
	return (ft_strlen(ptr));
}

int	persent_persent()
{
	ft_putchar_fd('%', 1);
	return (1);
}


int	ptr_persent(va_list *arg)
{
	unsigned long	n; // is it long long or unsgined long

	n = va_arg(*arg, long); // is it long long or long
	// if (n == 0)
	// {
	// 	ft_putstr_fd("0x0", 1);
	// 	return (3);
	// }
	//
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
			l = l + func(format[i+1] , &args);
			// if the ptr contain 0 , i returned -1
			i ++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			l ++;
		}
		// printf("l is : %d\n" , l);
		i ++;
	}
	va_end(args);
	return (l);
}

// int	main()
// {
// 	int	x = 0, y = 0;

// 	y = ft_printf(" %x ", -1);
// 	// y =  printf(" %X ", -1);
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
