/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 00:32:32 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/17 00:32:32 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tail;

	if (lst == NULL || new == NULL)
		return ;
	tail = ft_lstlast(*lst);
	if (tail != NULL)
		tail->next = new;
	else
		*lst = new;
}
