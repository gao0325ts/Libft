/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:07:33 by stakada           #+#    #+#             */
/*   Updated: 2024/11/08 20:17:35 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *result;

	if (size > 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	result = malloc(nmemb * size);
	if (!result)
		return (NULL);
	return (result);
}
