/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:06:03 by creyt             #+#    #+#             */
/*   Updated: 2021/10/22 16:47:39 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*mdgm;

	mdgm = malloc (size * count);
	if (!mdgm)
		return (0);
	ft_bzero(mdgm, count * size);
	return (mdgm);
}

/*int	main()
{
	char *s ;

	s = ft_calloc(5, sizeof(char));
	s = "hello";
	printf("%s\n", s);
}*/
