/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:26:05 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/02 11:47:48 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] += 32;
		}
		x++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = "AJHDGFJ";
	printf("%s", ft_strlowcase(str));
}
*/
