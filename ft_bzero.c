/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:49:56 by creyt             #+#    #+#             */
/*   Updated: 2021/10/22 10:19:59 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void	*s, size_t n)
{
	ft_memset (s, '\0', n);
}

int	main()
{
	char b[] = "Hello";
	char d[] = "Bonjour tout le monde";

  //	printf("%s\n", ((char *)ft_bzero(b, 4)));
  	printf("%p\n", ft_bzero(b, 4));
	ft_bzero(d, 4);
	printf("%s\n", d);
	return (0);
}
