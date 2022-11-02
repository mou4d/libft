/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 02:40:42 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/28 20:06:07 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ret = (char *) ft_calloc(1, sizeof(char));
		return (ret);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	s = s + start;
	ret = malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (*s && i < len)
	{
		ret[i] = *s++;
		i++;
	}
	ret[len] = '\0';
	return (ret);
}
