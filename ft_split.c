/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:07:59 by creyt             #+#    #+#             */
/*   Updated: 2021/10/29 14:58:25 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_charisdeliminator(char c, char	*set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return(1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}
/*char **ft_split(char const *s, char c)
{
	char	**s2;
	size_t	i;

	if (!s)
		return (0);
	while (s[i])
	{
		i++;
	}

	return (s2);
}*/


int	main()
{
	char	*s1 = "Bonjour les amis";
	char	c = '\0';
	printf("%d\n", ft_charisdeliminator(c, s1));
}
