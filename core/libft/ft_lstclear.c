/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:29:10 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/17 10:29:10 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


// void	*del(void *content)
// {
// 	int	a;
// 	int	*ptr;

// 	a = 99;
// 	ptr = &a;
// 	content = (void *)ptr;
// 	// printf("%d\n" (int*)content);
// }



void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*delete;

	if (*lst == NULL || del == NULL)
		return ;
	while ((*lst)->next != NULL)
	{
		delete = *lst;
		*lst = (*lst)->next;
		del(delete->content);
		free(delete);
		// ft_lstdelone(delete, delete->content); // not workgin also
	}

	// ft_lstdelone(*lst, (*lst)->content);
	del((*lst)->content);
	free(*lst);
	// ft_lstdelone(*lst, (void *)(*lst)->content);// why not working ?
	// how to del function works ?
	*lst = NULL;




	// if (*lst == NULL || del == NULL)
	// 	return ;
	// del((*lst)->content);
	// printf("s%d\n" , *(int *)((*lst)->content));
	// free((*lst)->next);
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
