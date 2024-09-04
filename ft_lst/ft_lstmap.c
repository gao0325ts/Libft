/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:52:06 by stakada           #+#    #+#             */
/*   Updated: 2024/05/17 10:27:35 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*tmp;
	void	*after_f;

	if (!lst || !f || !del)
		return (NULL);
	start = NULL;
	while (lst)
	{
		after_f = f(lst->content);
		tmp = ft_lstnew(after_f);
		if (!tmp)
		{
			ft_lstclear(&start, del);
			del(after_f);
			return (NULL);
		}
		ft_lstadd_back(&start, tmp);
		lst = lst->next;
	}
	return (start);
}
