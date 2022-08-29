/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyildiz <elyildiz@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:22:49 by elyildiz          #+#    #+#             */
/*   Updated: 2022/08/02 11:21:00 by elyildiz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main ()
{
	char	dest[] = "bahar";
	char	src[] = "elif";
	
	ft_strcpy(dest, src);
	printf("%s", ft_strcpy(dest, src));
}
*/
