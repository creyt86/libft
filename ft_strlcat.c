/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:29:09 by creyt             #+#    #+#             */
/*   Updated: 2021/10/19 11:25:31 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = dstsize;
	dstlen = (size_t)ft_strlen(dst);
	srclen = (size_t)ft_strlen(src);
	while (*dst != '\0')
	{
		dst++;
		if (i > 0)
			i--;
	}
	while (*src != '\0' && i > 1)
	{
		*dst = *src;
		dst++;
		src++;
		i--;
	}
	*dst = '\0';
	if (dstsize > dstlen)
		return (dstlen + srclen);
	return (dstsize + srclen);
}

/*int	main ()
{
	char	*s;
	char	*d;
	size_t dsize;

	char	s1[] = "Salut";
	char	d1[] = "Hello";

	s = "Salut";
	d = "Hello";
	dsize = 4;

	//printf("%lu\n", strlcat(s, d, dsize));
	printf("%lu\n", ft_strlcat(s1, d1, dsize));
}*/
