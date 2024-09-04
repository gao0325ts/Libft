/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 03:30:08 by stakada           #+#    #+#             */
/*   Updated: 2024/05/17 10:38:09 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (!dstsize && !dst)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (*dst)
		dst++;
	while (*src && i++ < (dstsize - dst_len - 1))
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char dst[11] = "helloworld";
// 	char src[15] = "copy-this-text";
// 	// printf("%zu\n", ft_strlcat(dst, NULL, 0));
// 	printf("%zu\n", strlcat(dst, src, 3));
// 	return (0);
// }