/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:41:15 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/20 15:40:51 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(t_list *node, t_list *tmp, void (*del)(void *))
{
	if (tmp == NULL)
	{
		ft_lstclear(&node, del);
		ft_lstdelone(tmp, del);
		return (1);
	}
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	node = NULL;
	if (lst == NULL)
		return (lst);
	node = ft_lstnew(f(lst->content));
	if (node == NULL)
	{
		ft_lstclear(&node, del);
		return (node);
	}
	lst = lst->next;
	while (lst != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		if (check(node, tmp, del))
			return (node);
		ft_lstadd_back(&node, tmp);
		lst = lst->next;
	}
	return (node);
}
// int	main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;
// 	t_list	*ptr;
// 	int	arr1[] = {5 , 65};
// 	int	arr2[] = {56 , 89};
// 	int	arr3[] = {44 , 11};
// 	int	arr4[] = {90 , 67};
// 	node1 = ft_lstnew(arr1);
// 	node2 = ft_lstnew(arr2);
// 	node2->next = node3;
// 	node3 = ft_lstnew(arr3);
// 	node3->next = node4;
// 	node1->next = node2;
// 	ptr = ft_lstmap(node1);
// }
