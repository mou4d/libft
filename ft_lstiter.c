/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:25:42 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/11/01 22:31:32 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_tmp;

	if (!lst)
		return ;
	lst_tmp = lst;
	while (lst_tmp)
	{
		f(lst_tmp->content);
		lst_tmp = lst_tmp->next;
	}
}
