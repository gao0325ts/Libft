/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 02:56:25 by stakada           #+#    #+#             */
/*   Updated: 2024/05/17 10:38:43 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	else
	{
		while (i++ < (dstsize - 1) && *src)
			*dst++ = *src++;
		*dst = '\0';
		return (src_len);
	}
}

// #include <stdio.h>

// int main(void)
// {
// 	// char dst[100];
// 	// char src[] = "copy-this-text";
// 	printf("%zu\n", ft_strlcpy(NULL, NULL, 5));
// 	return (0);
// }