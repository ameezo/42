#include <stdio.h>

typedef struct s_list
{
	void	*data;
	struct s_list	*next;
}t_list;



int	main()
{
	t_list node1;
	t_list node2;
	t_list node3;
	t_list *n;
	int	a;
	int	*ptr;

	// ptr = NULL;
	// *ptr = 67;
	a = 67;
	ptr = &a;
	node1.data = ptr;
	node1.next = &node2;

	// n = node1.next;
	//
	a = 15;
	node2.data = ptr;
	node2.next = &node3;



	printf("%p\n" , &node2);
	printf("%p\n" , node1.next);
	printf("uhghhh %d\n" , *(int *)(*(node1.next)).data);
	printf("%d\n" , ((int *)n)[0]);
	// n.next = node1.next;



	// n = &node1;
	// printf("%d\n" , *(int *)n[0]);
	printf("%d\n" , *(int *)node1.data);

	printf("%d\n" , *(int *)node1.data);




	printf("%d\n" , *(int *)node2.data);

	a = 90;
	node3.data = ptr;
	// now , try access the node 2 from node 1
	//
	//

 // while (node1 != NULL)
 // {
 //    printf("%i",*((int *)node1.data));
 //    node1 = node1.next;
 // }
	printf("%p\n" , node1.next);
	// printf("%d\n" , *(int *)(node1.next).data);


}
