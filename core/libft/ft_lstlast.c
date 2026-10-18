/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 00:28:06 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/17 00:28:06 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (ptr == NULL)
		return ptr;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return ptr;
}




// int	main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	t_list	**head;
// 	head = &node1;
// 	int	arr1[3] = {13, 14, 17};
// 	int	arr2[3] = {67, 67, 70};
// 	int	arr3[3] = {87, 60, 71};

// 	node1 = ft_lstnew((void *)arr1);
// 	node2 = ft_lstnew((void *)arr2);
// 	node3 = ft_lstnew((void *)arr3);

// 	ft_lstadd_front(head, node2);
// 	// ft_lstadd_front(head, node3);

// 	printf("%d\n" , ((int *)(*head)->content)[0]);
// 	printf("%d\n" , ft_lstsize(node1));


// }
