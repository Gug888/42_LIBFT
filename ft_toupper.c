/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:11:28 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/22 20:15:08 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*
int main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("give uppercase %c\n", ft_toupper('D'));
	printf("%c\n", ft_toupper('c'));
	printf("%c\n", ft_toupper('C'));
	printf("%c\n", ft_toupper(5));
	return (0);
}*/
