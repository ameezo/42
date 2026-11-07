/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_persent_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 19:46:39 by aal-bann          #+#    #+#             */
/*   Updated: 2026/11/06 15:19:47 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ptr_persent(va_list *arg) {
  unsigned long n;

  n = (unsigned long)va_arg(*arg, long);
  if (n == 0) {
    ft_putstr_fd("(nil)", 1);
    return (5);
  }
  ft_putstr_fd("0x", 1);
  return (to_hex(n, 0) + 2);
}

int x_persent(char s, va_list *arg) {
  return (to_hex(va_arg(*arg, unsigned int), s));
}
