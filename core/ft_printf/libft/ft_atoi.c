/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 17:29:33 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/11 13:56:49 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	minus;

	i = 0;
	minus = 0;
	num = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i ++;
	if (nptr[i] == '-')
	{
		minus = 1;
		i ++;
	}
	else if (nptr[i] == '+')
		i ++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 - (nptr[i] - 48);
		i ++;
	}
	if (minus)
		return (num);
	return (-num);
}
