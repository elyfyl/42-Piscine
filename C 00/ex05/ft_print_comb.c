/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:24:28 by elyildiz          #+#    #+#             */
/*   Updated: 2022/07/25 10:43:55 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_3num(char d, char e, char f)
{
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
}

void	ft_print_comb(void)
{
	char	d;
	char	e;
	char	f;

	d = '0';
	while (d <= '7')
	{
		e = d + 1;
		while (e <= '8')
		{
			f = e + 1;
			while (f <= '9')
			{
				ft_3num(d, e, f);
				if (d != '7')
					write(1, ", ", 2);
				f++;
			}
			e++;
		}
		d++;
	}
}
