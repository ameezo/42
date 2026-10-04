/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 20:44:26 by aal-bann          #+#    #+#             */
/*   Updated: 2026/09/30 01:41:37 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// im trying to make a test of the debugger , so i will use dbg


// unsigned int	ft_strlen(char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i ++;
// 	return i;
// }


#include <stdio.h>

int main()
{
	long double start;
	long double end;
	long double step;

	printf("enter start ");
	scanf("%Lf" , &start);

	printf("enter end ");
	scanf("%Lf" , &end);

	printf("enter step ");
	scanf("%Lf" , &step);

	while (start != end)
	{
		printf("%Lf\n" , start);
		start = start + step;
	}


}
