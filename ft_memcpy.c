/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:43:21 by creyt             #+#    #+#             */
/*   Updated: 2021/10/19 15:56:31 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*int	main()
{
	char s1[] = "Hello";
	char s2 [] = "Coucou";
	size_t n = 4;

	
	printf("%s\n", ft_memcpy(s1, s2, n));
	printf("%s\n", memcpy(s1, s2, n));
}*/
