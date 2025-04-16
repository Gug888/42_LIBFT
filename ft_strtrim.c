/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:34:39 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/07 18:44:40 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first_elem;
	size_t	last_elem;
	size_t	len;
	char	*moll;

	if (!set || !s1)
		return (NULL);
	first_elem = 0;
	last_elem = ft_strlen(s1);
	while (s1[first_elem] && ft_strchr(set, s1[first_elem]))
		first_elem++;
	while (last_elem > first_elem && ft_strchr(set, s1[last_elem - 1]))
		last_elem--;
	len = last_elem - first_elem;
	moll = (char *)malloc(len + 1);
	if (!moll)
		return (NULL);
	ft_memcpy(moll, s1 + first_elem, len);
	moll[len] = '\0';
	return (moll);
}
/*
int	main(void)
{
	char	*first;
	char	*second;
	char	*result;

	first = "Hayastan";
	second = "Hn";
	result = ft_strtrim(first, second);
	if (result)
		printf("the result is  %s\n", result);
	else
		printf("notjong concate \n");
	return (0);
}*/
