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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;
	void	*data;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	node = NULL;
	while (lst != NULL)
	{
		data = f(lst->content);
		tmp = ft_lstnew(data);
		if (tmp == NULL)
		{
			del(data);
			ft_lstclear(&node, del);
			return (NULL);
		}
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
