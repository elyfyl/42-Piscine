/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:38:30 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/02 12:01:02 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_len(src);
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}
/*
#include <stdio.h>
int	main()
{
	char	src[] = "World!";
	char	dest[] = "Hello ";
	
	printf("%d | %s", ft_strlcpy(dest, src, 2), dest);
}
*/
