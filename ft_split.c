/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:26:12 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/11/01 23:49:02 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char *s, char c)
{
	int		founded;
	int		i;

	i = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		while (*s != c && *s)
		{
			founded = 1;
			s++;
		}
		if (founded)
			i++;
		founded = 0;
		if (*s == '\0')
			break ;
		s++;
	}
	return (i);
}

static int	charcount(char *parm, char c, int pos)
{
	int		i;
	char	*s;

	s = parm;
	i = 0;
	while (s[pos])
	{
		if (s[pos] != c)
			i++;
		else
			break ;
		pos++;
	}
	return (i);
}

static	void	build(char **ret, char const *s, char c)
{
	int	i;
	int	wlen;
	int	wcount;
	int	totallen;

	totallen = ft_strlen(s);
	wlen = 0;
	i = 0;
	wcount = wordcount((char *)s, c);
	while (s[i])
	{
		if (s[i] != c)
		{
			wlen = charcount((char *)s, c, i);
			*ret = ft_substr(s, i, wlen);
			i += ft_strlen(*ret);
			ret++;
		}
		if (i >= totallen)
			break ;
		i++;
	}
	ret -= wcount;
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		wcount;

	if (!s)
		return (NULL);
	wcount = 0;
	wcount = wordcount((char *)s, c);
	ret = (char **) ft_calloc(wcount + 1, sizeof(char *));
	if (!ret)
		return (NULL);
	build(ret, s, c);
	return (ret);
}
