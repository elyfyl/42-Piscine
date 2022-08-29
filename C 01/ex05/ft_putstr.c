/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:07:09 by elyildiz          #+#    #+#             */
/*   Updated: 2022/07/30 11:31:39 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_putstr(char *str)
{
	int	sayac;

	sayac = 0;
	while (str[sayac] != '\0')
	{
		ft_putchar(str[sayac]);
		sayac++;
	}
}
