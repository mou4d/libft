/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 03:54:46 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/11/01 05:52:35 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_tmp;

	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	lst_tmp = *lst;
	while (lst_tmp->next)
		lst_tmp = lst_tmp->next;
	lst_tmp->next = new;
}
