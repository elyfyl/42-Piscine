/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:42:08 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/02 11:29:21 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	e;

	e = 0;
	while ((src[e] != '\0') && (e < n))
	{
		dest[e] = src[e];
		e++;
	}
	while (e < n)
	{
		dest [e] = '\0';
		e++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main ()
{
	char	src[] = "elif";
	char	dest[] = "bahar";
	unsigned int n;

	n = 2;
	
	ft_strncpy(dest, src, 2);
	printf("%s", dest);
	return (0);
}
*/
