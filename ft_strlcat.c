/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:50:02 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/11/01 03:06:26 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	len_dst = ft_strlen(dst);
	i = len_dst;
	if (dstsize < len_dst)
		return (len_src + dstsize);
	len_src = ft_strlen(src);
	while (*src && i < dstsize - 1)
	{
		dst[i] = *src;
		i++;
		src ++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}
