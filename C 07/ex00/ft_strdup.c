/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:31:15 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/10 21:33:25 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL )
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
 int main()
 {
 	char a[] = "hello";
	ft_strdup(a);
	printf("%s\n",a);
	return 0;
 }
*/
