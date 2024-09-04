/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:14:37 by stakada           #+#    #+#             */
/*   Updated: 2024/05/17 10:15:27 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int num, int is_negative)
{
	int	len;

	len = 0;
	if (is_negative)
		len++;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

static char	*set_int_to_char(char *str, long long *num, int *len)
{
	str[*len] = *num % 10 + '0';
	*num /= 10;
	(*len)--;
	return (str);
}

char	*ft_itoa(int n)
{
	long long	num;
	char		*str;
	int			is_negative;
	int			len;

	is_negative = 0;
	if (!n)
		return (ft_strdup("0"));
	else if (n < 0)
	{
		is_negative = 1;
		num = -(long long)n;
	}
	else
		num = (long long)n;
	len = count_len(num, is_negative);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (len >= 0)
		str = set_int_to_char(str, &num, &len);
	if (is_negative)
		str[0] = '-';
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%s\n", ft_itoa(INT_MIN));
// 	return (0);
// }