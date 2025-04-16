/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:23:43 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/04 19:42:08 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	return ((char *) NULL);
}
/*
int main(void)
{
	char *sec;
	int n;
	char *result;

	sec = "arguamnaium";
	n = '\0';
	result = ft_strrchr(sec, n);
if(result != NULL)
	printf("Find symbol in string %zu", result - sec);
else
	printf("Nothing \n");
return (0);
}*/
