/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:07:59 by creyt             #+#    #+#             */
/*   Updated: 2021/11/05 14:02:07 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*static int	ft_charisdeliminator(char c, char	*set)
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
}*/

static int	count_words(char *s, char c)
{
	size_t	i;
	int		nbwords;

	i = 0;
	nbwords = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && c != s[i + 1] && s[i + 1] != '\0')
			nbwords++;
		i++;
	}
	if (s[i] == '\0')
		nbwords++;
	return (nbwords);
}

static int	count_letters(char *s, char c)
{
	size_t	i;
	int letters;

	i = 0;
	letters = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return(i);
}

char **ft_split(char const *s, char c)
{
	char	**s2;
	size_t	i;

	if (!s)
		return (0);
	s2 = malloc(sizeof(char *) * (count_words + 1));
	if (!s2)
		return (0);
	while (s[i])
	{
		if (s[i] == c
		i++;
	}
	ft_substr(s, count_words, count_letters);
	return (s2);
}

int	main()
{
	char	*s1 = "  Bonjour   les amis ";
//	char	*s1 = "Bonjour";
	char	c = ' '; 
	printf("%s\n", ft_split(s1, c));
}
