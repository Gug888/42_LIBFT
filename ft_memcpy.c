/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:48:22 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/03 21:42:22 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char				*basa;
	const unsigned char	*data;
	size_t				len;

	len = 0;
	if (!dst && !src)
		return (0);
	basa = (char *)dst;
	data = (const unsigned char *)src;
	while (len < n)
	{
		basa[len] = data[len];
		len++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dest[10] = "ara";
	char	*source;
	size_t	c;
	char	demp[10] = "ast";
	char	*srct = "arabakanaytakanau";
	c = 5;
	source = "mayis";
	ft_memcpy(dest, source, c);
	printf("copy done the text was %s\n", dest);
	ft_memcpy(demp, srct, c);
	printf("copy doing %s\n", demp);
	return(0);
}*/
