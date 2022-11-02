/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 03:22:54 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/11/01 05:53:01 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*lst_tmp;
	int		i;

	if (!lst)
		return (0);
	lst_tmp = lst;
	i = 1;
	while (lst_tmp->next)
	{
		i++;
		lst_tmp = lst_tmp->next;
	}
	return (i);
}
