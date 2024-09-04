/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 02:05:28 by stakada           #+#    #+#             */
/*   Updated: 2024/05/17 10:45:05 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	char	*result_start;
	size_t	str_len;

	if (!s)
		return (NULL);
	else if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(&s[start]))
		str_len = ft_strlen(&s[start]);
	else
		str_len = len;
	result = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!result)
		return (NULL);
	result_start = result;
	while (str_len-- && s[start])
		*result++ = s[start++];
	*result = '\0';
	return (result_start);
}
