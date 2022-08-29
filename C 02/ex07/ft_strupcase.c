/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:43:36 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/02 11:45:17 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32;
		}
		x++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = "hkfdhga";
	printf("%s", ft_strupcase(str));
	}
*/
