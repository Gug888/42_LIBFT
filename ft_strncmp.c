/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:16:17 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/04 19:59:24 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] == '\0') || (s2[i] == '\0') || (s1[i] != s2[i]))
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char *s2 = "asryalakan";
	const char *s3 = "asryannaaa";
	const char *s4 = "asryannaaaa";
	const char *s5 = "asryannaaa";
	printf("count is %d\n", ft_strncmp(s2, s3, 9));
	printf("count is %d\n", ft_strncmp(s4, s5, 11));
	return (0);
}*/
