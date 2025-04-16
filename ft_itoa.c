/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:51:42 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/02/10 21:08:25 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_len(int str)
{
	size_t	i;

	i = 0;
	if (str <= 0)
		i++;
	while (str != 0)
	{
		str /= 10;
		i++;
	}
	return (i);
}

static char	*result_mem(int len)
{
	char	*result;

	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	return (result);
}

static char	*ft_min(void)
{
	char	*res;

	res = malloc(12);
	if (res)
	{
		res[0] = '-';
		res[1] = '2';
		res[2] = '1';
		res[3] = '4';
		res[4] = '7';
		res[5] = '4';
		res[6] = '8';
		res[7] = '3';
		res[8] = '6';
		res[9] = '4';
		res[10] = '8';
		res[11] = '\0';
	}
	return (res);
}

static char	*check_results(char	*res, int n, int dist)
{
	res[dist] = '\0';
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		res[--dist] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		dist;
	char	*res;

	if (n == -2147483648)
		return (ft_min());
	dist = ft_len(n);
	res = result_mem(dist);
	if (!res)
		return (NULL);
	check_results(res, n, dist);
	return (res);
}
/*
int main() {
    int numbers[] = {123, -456, 0, 789, -0, -2147483648};
    int num_tests = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < num_tests; i++) {
        char *result = ft_itoa(numbers[i]);
        if (result) {
            printf("ft_itoa(%d) = %s\n", numbers[i], result);
            free(result); // Free  memory
        } else {
            printf("Memory failed for ft_itoa(%d)\n", numbers[i]);
        }
    }

    return 0;
}*/
