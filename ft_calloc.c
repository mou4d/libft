/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 00:28:48 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/11/01 05:07:30 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (size == 0 && count == 0)
	{	
		size = 1;
		count = 1;
	}
	ret = malloc(count * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, count * size);
	return (ret);
}
