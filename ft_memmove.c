/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 19:02:42 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/03 20:55:42 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*data;
	const unsigned char	*dest;
	size_t				i;

	i = 0;
	data = (unsigned char *)dst;
	dest = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		i = len;
		while (i > 0)
		{
			data[i - 1] = dest[i - 1];
			i--;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	copybase[10] = "ar";
	char	*datacopy;
	size_t	length;

	datacopy = "jiojitsuyamatiano";
	length = 6;
	ft_memmove(copybase, datacopy, length);
	printf("copy are done %s\n", copybase);
}*/
