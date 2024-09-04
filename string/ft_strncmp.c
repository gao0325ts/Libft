/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 03:52:25 by stakada           #+#    #+#             */
/*   Updated: 2024/05/17 10:42:21 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		if (*s1 == '\0' || *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (0);
}
