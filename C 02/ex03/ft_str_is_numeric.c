/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:40:18 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/01 16:33:19 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str [x] >= 48 && str [x] <= 57))
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
	printf("%d", ft_str_is_numeric("01948987493"));
	printf("\n%d", ft_str_is_numeric("0484882j8995489"));
	printf("\n%d", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
}
*/
