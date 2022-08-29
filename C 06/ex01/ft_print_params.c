/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:22:08 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/09 12:36:36 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	d;

	c = 1;
	while (c < argc)
	{
		d = 0;
		while (argv[c][d] != '\0')
		{
			write(1, &argv[c][d], 1);
			d++;
		}
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
