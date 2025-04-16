/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:10:48 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/10 21:19:33 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
static void	f(unsigned int n, char *s)
{
	*s = *s +1;
}

int	main (void)
{
	char text[] = "abcdefghijklmno";

	printf("my example text %s\n", text);
	ft_striteri(text,f);
	printf("changed example %s\n", text);
	return (0);
}*/
