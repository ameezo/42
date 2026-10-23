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
// int	main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	**head;
// 	head = &node1;
// 	int	arr1[3] = {41, 5, 78};
// 	int	arr2[3] = {14, 45, 88};
// 	int	arr3[3] = {42, 56, 67};
// 	node1 = ft_lstnew(arr1);
// 	node2 = ft_lstnew(arr2);
// 	node3 = ft_lstnew(arr3);
// 	// printf("%d\n" , ((int *)((*head)->content))[0]);
// 	// ft_lstclear(head, del);
// 	// printf("%d\n" , ((int *)(node1->content))[2]);
// 	printf("%d\n" , ((int *)((*head)->content))[0]);
// 	int	a;
// 	int	*ptr;
// 	// a = NULL;
// 	ptr = NULL;
// 	// (*head)->content = (void *)ptr;
// 	// printf("%d\n" , ((int *)((*head)->content))[0]);
// }
