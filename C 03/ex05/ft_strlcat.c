/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:01:31 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/04 17:23:16 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c < size -1)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}
/*
#include <stdio.h>
int main()
{
	char	dest[100] = "elif";
	char	src[100] = "bahar";
	unsigned int result = ft_strlcat(dest,src,6);
	printf("%s - %d",dest, result);
	return (0);
}
*/
