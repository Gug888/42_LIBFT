/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:06:01 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/17 21:32:55 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sum;
	int	sign;

	i = 0;
	sum = 0;
	sign = 1;
	while ((str[i] == '\t') || (str[i] == ' ') || (str[i] == '\v') \
			|| (str[i] == '\n') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign = (-1);
		i++;
	}
	while (str[i])
	{
		if ((str[i] - '0' >= 0) && (str[i] - '0' <= 9))
			sum = sum * 10 + str[i] - '0';
		else
			break ;
		i++;
	}
	return (sum * sign);
}
/*
int	main(void)
{
	char *src;

	src = "----15+6a666asdasd";
	printf("count is %d\n", ft_atoi(src));
	return (0);
}*/
