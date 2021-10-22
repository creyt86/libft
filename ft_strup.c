/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:51:23 by creyt             #+#    #+#             */
/*   Updated: 2021/10/22 16:35:41 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	char *s2;
	int	i;
	int	len;
	
	len = 0;
	while (s[len])
		len++;
	s2 = malloc(sizeof(s * i);
	if (!s2)
		return (0);
	else
	{
		while (s[i])
		{
			s2[i] = s[i];
			i++;
		}
	s2[i] = '\0';
	return (s2);
	}
}

int	main()
{
	char *s1;
	char *s2;

	s1 = "Hello toi";
	printf("%s\n", ft_strdup(s2));
}
