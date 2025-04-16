/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 20:33:46 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/21 20:51:56 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("give text %d\n", ft_isascii('g'));
	printf("give number %d\n", ft_isascii('5'));
	printf("give upper text %d\n", ft_isascii('H'));
	printf("give symbol %d\n", ft_isascii('#'));
	printf("give text %d\n", ft_isascii(' '));
	printf("give numb or isscii %d\n", ft_isascii(128));
	return (0);
}*/
