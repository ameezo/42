/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:12:44 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/18 17:20:32 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int is_in_set(char c, char const *set)
{
	int	i;

	i = 0;

    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i ++;
    }
    return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen((char *)s1)-1;
	while (is_in_set(s1[start] , set))
		start ++;
	while (is_in_set(s1[end] , set))
		end --;

	ptr = ft_substr(s1, start, (end - start));
	return ptr;
}

/*int	main()
{
  char  *s;
  char  *set;
  s = "tripouilleaaxxx";
  set = "aax";

  // printf("%s\n" , ft_strtrim(s, set));


  char	*ptr;
  ptr = ft_strtrim(s , set);
  printf("%s\n" , ptr);
  free(ptr);
}*/
