/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:39:24 by aal-bann          #+#    #+#             */
/*   Updated: 2026/11/06 15:21:28 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

int	to_hex(unsigned long n, char s);
int	ft_printf(const char *format, ...);
int	ptr_persent(va_list *arg);
int	x_persent(char s, va_list *arg);
int	c_persent(va_list *arg);
int	s_persent(va_list *arg);
int	u_persent(va_list *arg);
int	d_persent(va_list *arg);
int	persent_persent(void);
