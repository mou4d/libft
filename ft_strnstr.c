/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 01:11:41 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/30 00:27:17 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (len < 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	while ((len > 0) && *haystack)
	{
		i = 0;
		while ((needle[i] == *(haystack + i)) && needle[i]
			&& *(haystack + i) && (len - i > 0))
			i++;
		if (needle[i] == '\0')
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
