/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:24:12 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/03 17:28:28 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0' && (b < nb))
	{
		dest[a + b] = src [b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char src[] = "print";
	char dest[] = "123 ";
	printf("%s", ft_strncat(dest, src, 5));
}
*/
