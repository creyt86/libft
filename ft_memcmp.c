/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:21:02 by creyt             #+#    #+#             */
/*   Updated: 2021/10/19 18:02:28 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/

int	ft_memcmp(void *dst, void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	while (n--)
	{
		if (s[i] != d[i])
			return (d[i] - s[i]);
		i++;
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
