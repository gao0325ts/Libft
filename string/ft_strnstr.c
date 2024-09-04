/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:04:38 by stakada           #+#    #+#             */
/*   Updated: 2024/05/17 10:42:44 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && *haystack)
	{
		j = 0;
		while (i + j < len && haystack[j] && needle[j]
			&& haystack[j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char *str1 = (char*)"";
// 	char *result = ft_strnstr(str1, "coucou", -1);
// 	printf("%s\n", result);
// 	char *str2 = (char*)"";
// 	char *answer = strnstr(str2, "coucou", -1);
// 	printf("%s\n", answer);
// 	return (0);
// }
