/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:42:50 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/21 12:44:34 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return 1;
	return 0;
}

int	ft_isdigit(char c)
{
	if (c >= 0 && <= 9)
		return 1;
	return 0;
}

int	ft_isalnum(char c)
{
	if (ft_isdigit(c) && ft_isalpha(c))
		return 1;
	return 0;
}
