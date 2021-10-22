/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:42:49 by creyt             #+#    #+#             */
/*   Updated: 2021/10/19 10:43:16 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*ptr_b;

	i = 0;
	ptr_b = b;
	while (len > i)
	{
		ptr_b[i] = c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char b[] = "Hello World";
	printf("%s\n", memset(b, 'c', 3));
	printf("%s\n", ft_memset(b, 'd', 4));
}*/
