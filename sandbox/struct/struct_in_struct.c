typedef struct
{
	int		model; // 2013 , 1999 ....
	char	name[10];
}Car;


typedef struct
{
	char	name[10];
	int		number;
	struct Car;
}Person;

typedef struct
{
	void *content;
	struct s_list *next;
}s_list;

typedef struct
{
	void *content;
	struct t_list *next; // this is a pointer of struct , pointer point to its type of datatype
} t_list;
