/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 20:11:20 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/31 21:12:04 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*data;
	size_t				i;

	data = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (data[i] == (unsigned char)c)
			return ((void *)&data[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*mem;
	int		j;
	char 	*box;
	size_t	d;

	mem = "fatality";
	j = 'd';
	d = 7;
	box = ft_memchr(mem, j, d);
	if(box)
		printf("done well %zu\n", box - mem);
	else
		printf("that parameter are not in s value Null \n");
}*/
