/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 23:47:06 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/16 23:47:06 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	size_t	len;
	t_list	*ptr;

	ptr = lst;
	len = 0;
	while (ptr != NULL)
	{
		len ++;
		ptr = ptr->next;
	}
	return (len);
}
