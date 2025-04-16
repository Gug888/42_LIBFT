/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 20:53:52 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/22 16:31:07 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("i give printable %d\n", ft_isprint('5'));
	printf("i give unprintable %d\n", ft_isprint(127));
	printf("i give unprintable %d\n", ft_isprint('\n'));
	printf("i give printable %d\n", ft_isprint(' '));
	printf("i give printable %d\n", ft_isprint('a'));
}*/
