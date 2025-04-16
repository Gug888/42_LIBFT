/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:06:35 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/03 21:32:49 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*data;
	unsigned char	symbol;
	size_t			i;

	data = (unsigned char *)b;
	symbol = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		data[i] = symbol;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char dest[20]= {'a', 'd', '4', '3', 'p'};
	int i;
	i = 0;
	ft_memset(dest, '*', 2);
	while(i < 20)
	{
		printf("%c", dest[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
