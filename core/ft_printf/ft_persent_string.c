/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_persent_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 19:49:29 by aal-bann          #+#    #+#             */
/*   Updated: 2026/11/04 19:49:29 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
