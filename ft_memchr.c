/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:28:58 by creyt             #+#    #+#             */
/*   Updated: 2021/10/19 19:23:22 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *str;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0' && str[i] != c && i < n - 1)
	{
		i++;
		return (str + i);
	}
	return (0);
}

/*int	main()
{
	char	s[] = "Bonjour tout le monde";
	int	c = 'j';
	size_t	n = 10;

	printf("%s\n", memchr(s, c, n));
}*/
