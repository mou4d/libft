/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:34:58 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/11/01 23:17:54 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_tmp;
	t_list	*ret;

	if (!lst)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		lst_tmp = ft_lstnew(f(lst->content));
		if (lst_tmp)
			ft_lstadd_back(&ret, lst_tmp);
		else
			break ;
		lst = lst->next;
	}
	if (!lst_tmp)
	{
		ft_lstclear(&ret, del);
		return (NULL);
	}
	return (ret);
}
