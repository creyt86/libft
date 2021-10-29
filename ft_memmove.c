/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:32:17 by creyt             #+#    #+#             */
/*   Updated: 2021/10/25 15:45:48 by creyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (src == dst)
		return (0);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char src[] = "abcdefghijklm";
	char dst[] = "0123456789";
	size_t len = 3;

	printf("%s\n", memmove(src, dst, len));
	printf("%s\n", ft_memmove(src, dst, len));

	char	d[] = "abcdefghij";
	char	s[] = "0123456789";
	char	d1[] = "Coucou toi ca va!";
	char	s1[] = "Coucou toi ca va !";

	printf("%s\n", ft_memmove((d + 3), (s + 4), 4));
	printf("%s\n", memmove((d + 3), s + 4, 5));
	printf("%s\n", ft_memmove(d1, s1, 18));
	printf("%s\n", memmove(d1, s1, 18));

}*/
