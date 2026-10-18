/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:45:25 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/11 13:27:36 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




int	ft_isascii(int c)
{

	if (c >= 0 && c <= 127)
		return 1;
	return 0;
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	printf("%d\n" , isascii('ع'));
// 	printf("%d" , ft_isascii('ع'));
// }
