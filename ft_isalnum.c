/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 20:25:05 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/03 21:20:42 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isdigit(c) || ft_isalpha(c)))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("give number %d\n", ft_isalnum('g'));
	printf("give text %d\n", ft_isalnum('g'));
	printf("give uper text %d\n", ft_isalnum('H'));
	printf("give symbol  %d\n", ft_isalnum('#'));
	return (0);
}*/
