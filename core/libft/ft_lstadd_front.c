/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:31:15 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/15 14:31:15 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
// int	main()
// {
// 	int	arr[3] = {99, 2 , 3};
// 	t_list	*ptr = lst_new((void *)arr);
// 	// this is the first node
// 	printf("%d\n" , ((int *)(ptr -> content))[2]);
// 	int	arr2[3] = {3, 15, 1};
// 	t_list	*ptr2 = lst_new((void *)arr2);
// 	ptr->next = ptr2;
// 	printf("%d\n", ((int *)(ptr->content))[1]);
// 	// then , make node1.next point to the next node
// 	int	arr3[3] = {3, 95, 1};
// 	t_list	*ptr3 = lst_new((void *)arr3);
// 	// but before , lets try to print it from node 1
// 	// printf("%d\n" , *(int *)(*(ptr->next)).content);
// 	// i got :
// 	// zsh: segmentation fault  ./main
// 	t_list	**dptr = &ptr;
// 	ft_lstadd_front(dptr, ptr3); // is that calling true ?
// 	free(ptr);
// 	free(ptr2)
