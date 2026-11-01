/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:39:24 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/22 12:39:24 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"
int	to_hex(unsigned long n , char s);
int	ft_printf(const char *format, ...);
#include <stdio.h>
#include <stdint.h>
#include <limits.h>
