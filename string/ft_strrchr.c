/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 03:44:44 by stakada           #+#    #+#             */
/*   Updated: 2024/05/17 10:43:19 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)p);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%s\n", ft_strrchr("teste", 1024));
// 	return (0);
// }