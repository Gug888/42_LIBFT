/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:04:21 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/22 20:14:51 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
int	main(void)
{
	printf("give lower %c\n", ft_tolower('a'));
  	printf("give lower %c\n", ft_tolower('h'));
  	printf("give upper %c\n", ft_tolower('A'));
 	printf("give upper %c\n", ft_tolower('D'));
  	printf("give number %c\n", ft_tolower('8'));
}*/
