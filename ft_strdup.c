/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:50:38 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/02 19:47:42 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*call;
	int		i;

	i = 0;
	call = ((char *)malloc(ft_strlen(s1) + 1));
	if (!call)
		return (NULL);
	while (s1[i] != '\0')
	{
		call[i] = s1[i];
		i++;
	}
	call[i] = '\0';
	return (call);
}
/*
int	main(void)
{
	char		*data;
	const char	*src;

	src = "hello my name is";
	data = ft_strdup(src);
	if (data)
		printf("well done %s\n", data);
	else
		printf("wrong gone ... \n");
	free(data);
}*/
