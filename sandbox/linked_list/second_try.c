#include <stdio.h>

typedef struct s_list
{
	void	*data;
	struct s_list	*next;
}t_list;


int	main()
{
	// now , implement array of nodes
	t_list node1;
	t_list node2;
	t_list node3;
	t_list *ptr;
	int	a,b;

	a = 67;
	b = 76;

	node1.data = &a;
	node1.next = &node2;


	node2.data = &b;
	node2.next = &node3;


	// now , print the node 2 from node 1;
	// make a pointer to pass to node 2 from node 1
	printf("%d\n" , *(int *)((*(node1.next)).data));
	ptr = &node1;
	printf("\n\n");
	printf("%d\n" , *(int *)(*ptr).data);
	printf("%d\n" , *(int *)(*((*ptr).next)).data);
	// instead of this rubbish (cute things with pointers hhhh)

	ptr = (*ptr).next;

	printf("it should be 76 %d\n" , *(int *)(*ptr).data);// i got it


	// the while loop looks like
	while (ptr -> next)
	{
		printf("%d\n" , *(int *)(ptr -> data));
		ptr = ptr -> next;
		// so , -> is the same as (*ptr).next
	}
}
