/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:55:09 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/15 09:55:09 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>


typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);


int	ft_isdigit(char c);
int	ft_isalpha(char c);
int	ft_tolower(int c);

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int	ft_lstsize(t_list *lst);
unsigned int	ft_strlen(char *s);


char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new); // do i really need to add every function in the header file ?
void	ft_lstadd_back(t_list **lst, t_list *new);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_bzero(void *s, size_t n);
void	ft_putnbr_fd(int n, int fd);
