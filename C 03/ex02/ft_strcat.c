/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:23:45 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/06 12:57:05 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src [b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char src[] = "print";
	char dest[] = "123 ";
	printf("%s", ft_strcat(dest, src));
}
*/
