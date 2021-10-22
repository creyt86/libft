/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:31:36 by creyt             #+#    #+#             */
/*   Updated: 2021/10/21 11:49:11 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *str);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int	nlen;
	char	*h;
	char	*n;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	nlen = ft_strlen(n);
	if (nlen == 0)
		return (h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] != '\0' && n[j] != '\0'
				&& h[i + j] == n[j] && i + j < len)
		{
			if (n[j + 1] == '\0')
			{
				return (h + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main()
{
	char *h = "Bonjour tout le monde";
	char *n = "tout";
	size_t len = 20;

	printf("%s\n", ft_strnstr(h, n, len));
}
