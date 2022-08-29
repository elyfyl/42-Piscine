/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:20:26 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/01 17:25:52 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str [x] >= 65 && str [x] <= 90))
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
	printf("%d", ft_str_is_uppercase("JKFBVHFH"));
	printf("\n%d", ft_str_is_uppercase("Hlf8439jglkj"));
	printf("\n%d", ft_str_is_uppercase("s0BdFJKLDc,"));
}
*/
