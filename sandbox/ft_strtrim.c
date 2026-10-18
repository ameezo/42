/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:12:44 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/12 16:47:41 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"



// int	lenn(char const *s, char const *set)
// {
// 	int	i;
// 	int	len;
// 	int	j;

// 	len = 0;
// 	i = 0;
// 	j = 0;
// 	while (s[i] != '\0')
// 	{
// 		while (set[j])
// 		{
// 			if (set[j] == s[i])
// 			{
// 				j ++;
// 				break;
// 			}
// 			else
// 				j ++;
// 			if (set[j] == '\0')
// 				len ++;
// 		}
// 		j = 0;
// 		i ++;
// 	}
// 	return len;
// }


char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int	i;
	int	j;
	int	k;


	i = 0;
	j = 0;
	k = 0;

	while (set[j])
	{
		while (s1[i] == set[j])
			i ++;
		j ++;
	}

// 	  s = "   xxxtripouille";
//   set = " x";





	// int	len;
	// char	*ptr;
	// int	i;
	// int	j;
	// int	k;


	// k = 0;
	// i = 0;
	// j = 0;
	// len = lenn(s1, set);
	// ptr = (char *)malloc(sizeof(char) * (len + 1));
	// if (ptr == NULL)
	// 	return ptr;
	// // printf("len : %d\n" , len);
	// while (s1[i] != '\0')
	// {
	// 	while (s1[i] != set[j] && set[j] != '\0')
	// 		j ++;
	// 	if (set[j] == '\0')
	// 	{
	// 		ptr[k] = s1[i];
	// 		k ++;
	// 	}
	// 	j = 0;
	// 	i ++;
	// }
	// ptr[k] = '\0';

	// return ptr;
	return NULL;
}

int	main()
{
  char  *s;
  char  *set;
  s = "   xxxtripouille";
  set = " x";

  printf("%s\n" , ft_strtrim(s, set));
//   char	*ptr;
//   ptr = ft_strtrim(s , set);
//   printf("%s\n" , ptr);
//   free(ptr);
}
