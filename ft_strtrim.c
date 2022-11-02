/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:02:05 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/11/01 23:53:37 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	start;
	size_t	len_s1;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1) - 1;
	start = 0;
	while ((ft_strchr(set, s1[start]) != NULL) && s1[start])
		start++;
	if (s1[start] == '\0')
		return (ft_calloc(1, sizeof(char)));
	while ((ft_strrchr(set, s1[len_s1]) != NULL) && (len_s1 >= 0))
		len_s1--;
	ret = ft_substr(s1, start, len_s1 - start + 1);
	return (ret);
}
