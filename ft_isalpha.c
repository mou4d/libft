/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:00:16 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/10/03 02:05:14 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	ret;

	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		ret = 1;
	else
		ret = 0;
	return (ret);
}
