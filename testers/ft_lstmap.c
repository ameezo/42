/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:41:15 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/17 20:41:15 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>






t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*node;
	t_list	*next;
	t_list	*first;
	int	flag;


	flag = 1;
	if(lst == NULL)
		return lst;
	first = malloc(sizeof(t_list));
	if (first == NULL)
		return first;
	first->content = f(lst->content);
	first->next = node;
	lst = lst->next;
	while (lst != NULL)
	{
		// allocate one and leave one
		if (flag)
		{
			node = malloc(sizeof(t_list));
			if (node == NULL)
				// free all
			{
				ft_lstclear(&first, del);
				//free(node);
				return node;
			}

				// return
			node->content = f(lst->content);
			if (next != NULL)
				next->next = node;
			flag = 0;
		}
		else
		{
			next = malloc(sizeof(t_list));
			if (next == NULL)
				// free all
			{
				ft_lstclear(&first, del);
				// free(next);
				return next;
			}

			next->content = f(lst->content);
			node->next = next;
			flag = 1;

		}
		lst = lst->next;

	}
	return first;
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

// // make a new list
// // dont alter the old lst
// // the new list have the content of the old lst by f()
// // del used when create a new node and return null , so you have to clear all the nodes created
