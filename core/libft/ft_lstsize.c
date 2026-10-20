/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 23:47:06 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/16 23:47:06 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	size_t	len;
	t_list	*ptr;

	ptr = lst;
	len = 0;
	while (ptr != NULL)
	{
		len ++;
		ptr = ptr->next;
	}
	return (len);
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
