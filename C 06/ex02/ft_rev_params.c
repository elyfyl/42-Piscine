/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:27:23 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/09 11:42:16 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	d;

	c = argc -1;
	d = 0;
	if (argc > 1)
	{
		while (c > 0)
		{
			d = 0;
			while (argv[c][d] != '\0')
			{
				write(1, &argv[c][d], 1);
				d++;
			}
			write(1, "\n", 1);
			c--;
		}
	}
	return (0);
}
