/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:29:10 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/20 15:14:05 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*delete;

	if (del == NULL || lst == NULL || *lst == NULL)
		return ;
	while ((*lst)->next != NULL)
	{
		delete = *lst;
		*lst = (*lst)->next;
		del(delete->content);
		free(delete);
	}
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
