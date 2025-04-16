/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 21:16:20 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/06 19:58:59 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*dataone;
	const unsigned char	*datasec;
	size_t				i;

	i = 0;
	dataone = (const unsigned char *)s1;
	datasec = (const unsigned char *)s2;
	while (i < n)
	{
		if (dataone[i] != datasec[i])
			return (dataone[i] - datasec[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*base1;
	char	*base2;
	size_t	s;
	int		result;
	
	base1 = "promotion";
	base2 = "promotone";
	s = 5;
	printf("count is %d\n", ft_memcmp(base1, base2, s));
}*/
