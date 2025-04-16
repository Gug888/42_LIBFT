/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 20:41:36 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/06 21:45:53 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	size_t	count_size;
	char	*concation;

	if (!s1 || !s2)
	{
		if (s1)
			return (ft_strdup(s1));
		else if (s2)
			return (ft_strdup(s2));
		else
			return (ft_strdup(""));
	}
	index = 0;
	count_size = ft_strlen(s1) + ft_strlen(s2);
	concation = (char *)malloc(count_size + 1);
	if (!concation)
		return (concation);
	while (*s1)
		concation[index++] = *s1++;
	while (*s2)
		concation[index++] = *s2++;
	concation[index] = '\0';
	return (concation);
}
/*
int	main(void)
{
	char	*first;
	char	*second;
	char	*result;

	first = "Hay";
	second = "astan";
	result = ft_strjoin(first, second);
	if (result)
		printf("the result is  %s\n", result);
	else
		printf("notjong concate \n");
	return (0);
}*/
