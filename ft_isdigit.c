/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:09:12 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/21 18:36:07 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isdigit(int a)
{
	if ((a >= '0' && a <= '9'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("must be one %d", ft_isdigit(48));
	printf("must be one %d", ft_isdigit('5'));
	printf("is not digit %d", ft_isdigit('A'));
	return (0);
}*/
