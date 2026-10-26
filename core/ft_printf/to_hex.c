/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 13:51:48 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/25 13:51:48 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert this int into hex ....
// lets begin with
// 10 == A
// 11 == B
// 11 == C
// 11 == D
// 11 == E
// 11 == F
// now , aanything is so easy
#include "../libft/libft.h"
#include <stdio.h>
// char	*to_hex(int n)
// so maybe i return the len of character printed so i can print it out
int	to_hex(unsigned long n , char s)
{
	char	arr[17];
	int		len;

	len = 0;
	if (s == 'x' || s == 0)
		ft_strlcpy(arr, "0123456789abcdef",17);
	if (s == 'X')
		ft_strlcpy(arr, "0123456789ABCDEF",17);
	if (n / 16 != 0)
		len = len + to_hex(n / 16 , s);
	else if (n / 16 == 0)
	{
		ft_putchar_fd(arr[n % 16], 1);
		return (1);
	}
	// printf("%d\n" , len);
	ft_putchar_fd(arr[n % 16], 1);
	return (len + 1);
}
// do the work
// recursive -- > done
// return len -- > done

// int	main()
// {
// 	printf("\n%d\n" , to_hex(4138));
// }
