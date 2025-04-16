/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:44:19 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/27 19:42:59 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	len;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (!dst && !src)
		return (0);
	if (dstsize <= lendst)
		return (lensrc + dstsize);
	len = (dstsize - lendst - 1);
	if (len > lensrc)
	{
		len = lensrc;
	}
	ft_memcpy(&dst[lendst], src, len);
	dst[lendst + len] = '\0';
	return (lendst + lensrc);
}
/*
int	main(void)
{
	char *src;
	char dest[50] = "estemantrakaradfffffffffffeiigggggggh";
	src = "argum";
	size_t	n;
	char *sour;
	char demt[50] = "estfe";
	src = "argum";
	sour = "alsa";
	size_t	k;
	char dete[50] = "pqrstuvwxyz";
	char *sre = "abcd";
	size_t	p = 0;
	n = 25;
	printf("the copy is %zu \n", ft_strlcat(dest, src, n));
	k = 15;
	printf("the copy is %zu\n", ft_strlcat(demt, sour, k));
	printf("later check %zu\n",ft_strlcat(dete,sre,p));
	return (0);
}*/
