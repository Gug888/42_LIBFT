/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:08:05 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/06 19:45:13 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ci;

	ci = ((unsigned char)c);
	while (*s != '\0')
	{
		if (((unsigned char)*s) == ci)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((unsigned char)*s == ci)
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	char	*s1;
	int		z;
	
	s1 = "argerntiny";
	z = 'n';
	char *result;

	result = ft_strchr(s1, z);

	if(result != NULL)
		printf("finding and the address is  %ld", result - s1);
	else
		printf("didnt find \n");
	return (0);
}*/
