/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:28:58 by creyt             #+#    #+#             */
/*   Updated: 2021/10/22 16:48:11 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned)c)
			return (str);
		str++;
	}
	return (0);
}

/*int	main()
{
	char	s[] = "Bonjour tout le monde";
	int	c = 'j';
	size_t	n = 10;

	printf("%s\n", memchr(s, c, n));
	printf("%s\n", ft_memchr(s, c, n));
}*/
