/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:08:06 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/10 23:27:29 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		c;

	result = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			result[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			result[c++] = sep[j++];
		}
		i++;
	}	
	result[c] = '\0';
	return (result);
}
/*
#include<stdio.h>
int	main(void)
{
	char	*tab[3];
	tab[0] = "hello";
	tab[1] = "piscine";
	tab[2]	= "world";
	printf("%s", ft_strjoin(3, tab, "42"));
	return (0);
}
*/
