/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:21:02 by creyt             #+#    #+#             */
/*   Updated: 2021/10/22 16:49:11 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/

int	ft_memcmp(void *dst, void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
	{
		if (*s != *d)
			return (*d - *s);
		s++;
		d++;
	}
	return (0);
}

/*int	main()
{
	char	s1[] = "Bonjour";
	char	s2[] = "Hola";
	size_t n = 10;

	printf("%d\n", memcmp(s1, s2, n));
	printf("%d\n", ft_memcmp(s1, s2, n));
}*/
