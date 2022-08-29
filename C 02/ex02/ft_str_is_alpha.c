/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:12:41 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/02 11:34:06 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	shortif(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	else if (letter >= 'a' && letter <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (shortif(str[x]) == 0)
			return (0);
		x++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_str_is_alpha("abcdefghijkl"));
	printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
	printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
}
*/
