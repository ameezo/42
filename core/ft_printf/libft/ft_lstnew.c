/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:09:47 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/15 14:09:47 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node1;

	node1 = malloc(sizeof(t_list));
	if (node1 == NULL)
		return (NULL);
	node1->content = content;
	node1->next = NULL;
	return (node1);
}
