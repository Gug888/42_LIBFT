/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:07:55 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/04 20:19:04 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*sum;
	size_t	gumar;

	gumar = (size * count);
	sum = malloc(gumar);
	if (!sum)
		return (NULL);
	ft_memset(sum, 0, gumar);
	return (sum);
}
/*
int	main(void)
{
	size_t	s1;
	size_t	s2;
	int		*result;
	int		i;

	i = 0;
	s1 = 5;
	s2 = sizeof(int);
	result = ft_calloc(s1, s2);
	if(result)
	{
		while (i < s1)
		{
			printf("well done result= %d\n", result[i]);
			i++;
		}
	}
	else
	{
		printf("wrong dangerous");
	}
	free(result);
	return (0);
}*/
