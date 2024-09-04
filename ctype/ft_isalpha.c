/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:43:42 by stakada           #+#    #+#             */
/*   Updated: 2024/05/02 02:36:59 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isalpha('a'));
// 	printf("%d\n", ft_isalpha('A'));
// 	printf("%d\n", ft_isalpha('1'));
// 	return (0);
// }