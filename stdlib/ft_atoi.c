/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:20:37 by stakada           #+#    #+#             */
/*   Updated: 2024/05/02 06:20:09 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long long	result;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (sign == 1 && result > (LONG_MAX - (*str - '0')) / 10)
			return ((int)LONG_MAX);
		else if (sign == -1 && -(result) < (LONG_MIN + (*str - '0')) / 10)
			return ((int)LONG_MIN);
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	char *str = "--42";
// 	printf("%d\n", ft_atoi(str));
// 	char *str2 = "--42";
// 	printf("%d\n", atoi(str2));
// 	return (0);
// }
