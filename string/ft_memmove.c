/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:38:37 by stakada           #+#    #+#             */
/*   Updated: 2024/05/17 10:30:05 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*start;

	if (!dst && !src)
		return (NULL);
	start = dst;
	if (dst < src)
	{
		while (len--)
			*(unsigned char *)dst++ = *(const unsigned char *)src++;
	}
	else
	{
		dst += len - 1;
		src += len - 1;
		while (len--)
			*(unsigned char *)dst-- = *(const unsigned char *)src--;
	}
	return (start);
}
