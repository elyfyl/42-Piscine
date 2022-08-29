/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:48:53 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/10 22:19:49 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = malloc(sizeof(int) * (max - min));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include<stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = ;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	
	printf("%d", size);
}
*/
