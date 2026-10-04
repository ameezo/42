/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-bann <aal-bann@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 17:29:33 by aal-bann          #+#    #+#             */
/*   Updated: 2026/10/04 18:43:09 by aal-bann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && (s[i] >= 48 && s[i] <= 57))
		i ++;
	return i;
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	len;
	int	big;
	int	minus;

	i = 0;
	len = 0;
	big = 1;
	minus = 0;
	if (*nptr == '-')
	{
		minus ++;
		nptr ++;
	}
	len = ft_strlen((char *)nptr) - 1;
	while (len--)
		big = big * 10;
	while (*nptr != '\0')
	{
		// do i have to check if the nptr have non-numbers characters ?
		i = i + ((*nptr - 48) * big);
		big = big / 10;
		nptr ++;
	}
	if (minus)
		return -i;
	return i;
}

int	main()
{
	char	*ptr;
	ptr = "-00782t904";
	printf("%d\n" , atoi(ptr));
	printf("%d\n" , ft_atoi(ptr));
}
