/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:46:42 by creyt             #+#    #+#             */
/*   Updated: 2021/10/22 16:51:04 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

/*int	main()
{
	char	c;
   
	c = '\0';

	printf("%s\n", ft_strchr("Hello world", c));

}*/
