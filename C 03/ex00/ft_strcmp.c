/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:09:53 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/03 11:24:50 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_strcmp("Elif", "Eliff"));
	printf("\n%d", ft_strcmp("Eliff", "Elif"));
	printf("\n%d", ft_strcmp("Elif", "Elif"));
}
*/
