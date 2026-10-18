/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:33:08 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/17 20:33:08 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	ptr = lst;
	if (ptr == NULL || f == NULL)
		return ;
	while (ptr != NULL)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
}
