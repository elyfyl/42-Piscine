/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:47:08 by elyildiz          #+#    #+#             */
/*   Updated: 2022/07/30 12:20:08 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	a;

	a = 0;
	while (a < size -1)
	{
		temp = tab[a];
		tab[a] = tab[size -1];
		tab[size -1] = temp;
		size--;
		a++;
	}
}
