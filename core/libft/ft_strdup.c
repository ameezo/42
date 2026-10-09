/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 11:49:52 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/09 14:17:36 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


unsigned int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i ++;
	return i;
}



char	*ft_strdup(const char *s)
{
	unsigned int	len;
	int	i;
	char	*ptr;

	i = 0;
	len = ft_strlen((char *)s);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return ptr;
	while (*s != '\0')
	{
		ptr[i] = *s;
		s ++;
		i ++;
	}
	ptr[i] = '\0';
	return ptr;
}

// int	main()
// {
// 	// return a pointer to a new string made by malloc
// 	char	*ptr;
// 	char	*ptr2;

// 	char	*str;

// 	str = "someting";

// 	ptr2 = ft_strdup(str);
// 	printf("ptr2 %s\n", ptr2);
// 	free(ptr2);

// 	ptr = strdup("something");
// 	printf("%s\n" , ptr);
// 	free(ptr);
// }
