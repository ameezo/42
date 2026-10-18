/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 09:22:17 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/14 13:42:26 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  convert from int to string
// 1028 -- > "1028"
// use malloc
#include "libft.h"


int	digit_count(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len ++;
	else if (n == 0)
		return 0;
	while (n)
	{
		len ++;
		n = n / 10;
	}
	return len;
}

void	fill(char *ptr, int n, int len)
{
	ptr[len] = '\0';
	len --;
	while (n != 0)
	{
		if (n < 0)
			ptr[len] = ((n % 10) * -1) + 48;
		else
			ptr[len] = ((n % 10)) + 48;
		n = n / 10;
		len --;
	}
}
char	*ft_itoa(int n)
{
	// a way to count the n digits
	int	len;
	char	*ptr;

	len = digit_count(n); // 2 + 1 to the minus sign
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return ptr;
	if (n < 0)
		ptr[0] = '-';
	if (n == 0)
	{
		ptr[len] = '0';
		return ptr;
	}
	fill(ptr, n, len);
	return ptr;
}

// int	main()
// {
// 	char	*ptr;

// 	int	n;

// 	n = 111;
// 	ptr = ft_itoa(n);
// 	printf("%s\n" , ptr);
// 	free(ptr);
// }
