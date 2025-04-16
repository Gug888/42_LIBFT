/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:17:56 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/25 19:47:14 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	const char *test = "Hello world";
	const char *test1 = "hi jimbeam";
	printf("length is %zu\n", ft_strlen(test));
	printf("length is %zu\n", ft_strlen(test1));
	return (0);
}*/
