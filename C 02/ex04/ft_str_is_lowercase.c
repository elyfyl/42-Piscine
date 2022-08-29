/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:52:23 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/01 17:14:49 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str [x] >= 97 && str [x] <= 122))
		{
			return (0);
		}
		x++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_str_is_lowercase("01aB493"));
	printf("\n%d", ft_str_is_lowercase("lfkglfjglkj"));
	printf("\n%d", ft_str_is_lowercase("s0Bdlkc,"));
}
*/
