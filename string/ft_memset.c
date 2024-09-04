/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:16:02 by stakada           #+#    #+#             */
/*   Updated: 2024/05/03 17:55:52 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*start;

	start = b;
	while (len--)
		*(unsigned char *)b++ = (unsigned char)c;
	return (start);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "ABCDE";
// 	printf("%s\n", ft_memset((void *)str, 'A', 3));
// 	return (0);
// }