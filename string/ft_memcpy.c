/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:27:59 by stakada           #+#    #+#             */
/*   Updated: 2024/05/17 10:29:30 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*start;

	if (!dst && !src)
		return (NULL);
	start = dst;
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (start);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char *dst1 = NULL;
// 	char *src1 = NULL;
// 	char *result1 = (char *)(memcpy(dst1, src1, 2));
// 	printf("[dst == NULL && src == NULL]%s\n", result1);

// 	char *dst2 = NULL;
// 	char *src2 = "def";
// 	char *result2 = (char *)(memcpy(dst2, src2, 2));
// 	printf("[dst == NULL]%s\n", result2);

// 	char dst3[4] = "abc";
// 	char *src3 = NULL;
// 	char *result3 = (char *)(memcpy(dst3, src3, 2));
// 	printf("[src == NULL]%s\n", result3);

// 	return (0);
// }