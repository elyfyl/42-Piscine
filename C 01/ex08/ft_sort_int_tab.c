/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:09:25 by elyildiz          #+#    #+#             */
/*   Updated: 2022/07/30 12:21:24 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab [i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
