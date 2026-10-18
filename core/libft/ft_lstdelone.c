/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:07:45 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/17 10:07:45 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// the function that delete the content
// void	del(void *content)
// {
// 	free(content);
// }


void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL || del != NULL)
	{
		del(lst->content);
		free(lst);
	}
}
