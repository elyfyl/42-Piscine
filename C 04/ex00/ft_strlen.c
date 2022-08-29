/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:12:40 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/07 15:41:52 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/* alternatifi 
 int    ft_strlen(char *str)
 {
     int    i;

     i = 0;
     while (i++, str[i])
     {
     }
     return (i);
 }
*/

/*
#include <stdio.h>
int main ()
{
	printf("%d", ft_strlen("42piscine"));
}
*/
