/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:58:47 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/04 21:36:51 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
		size_t dstsize)
{
	unsigned int		i;
	unsigned int		j;

	if (!src)
		return (0);
	j = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (dstsize > 0)
	{
		while (src[j] != '\0' && j < (dstsize - 1))
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}
