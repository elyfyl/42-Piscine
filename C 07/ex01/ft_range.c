/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:35:28 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/10 21:47:32 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int		*num;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	num = (int *)malloc(sizeof(int) * (max - min));
	if (num == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		num[i] = min;
		i++;
		min++;
	}
	return (num);
}
/*
#include<stdio.h>
 int main(void)
 {
 	int min;
	int max;
	int *tab;
	int i = 0;
	int size;
	min = 3;
	max = 33;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ",tab[i]);
		i++;
	}
 }
*/
