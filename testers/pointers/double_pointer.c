// char	*fun(char *str)
// {
// 	char	**ptr;
// 	while (*str != '\0')
// 	{
// 		if (*str == 'i')
// 		{
// 			ptr = &str;
// 			printf("double pointer %c\n" , **ptr);
// 			*ptr ++;
// 			printf("double pointer %c\n" , **ptr);
// 		}
// 		printf("%c\n" , *str);
// 		str ++;
// 	}
// 	return *ptr;
// 	// ? why i cannot see anything ? im pointing a double pointer to the original string , but i cannot continue to print the rest of the string
// }
