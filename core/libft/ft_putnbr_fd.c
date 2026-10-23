/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-bann <aal-bann@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/14 19:45:55 by aal-bann         #+#    #+#              */
/*   Updated: 2026/10/20 16:14:52 by aal-bann        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_digit(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	fill_array(char *arr, int len, int n)
{
	while (len > 0)
	{
		if (n < 0)
		{
			arr[len] = (-n % 10) + 48;
			len--;
		}
		else
		{
			len--;
			arr[len] = (n % 10) + 48;
		}
		n = n / 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	char	arr[12];

	len = number_digit(n);
	ft_bzero(arr, 12);
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n == 0)
		arr[0] = '0';
	else if (n < 0)
		arr[0] = '-';
	fill_array(arr, len, n);
	ft_putstr_fd(arr, fd);
}
// int	main()
// {
// 	// [ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0]
// 	int	i = -2147483648;
// 	ft_putnbr_fd(i, 1);
// }
