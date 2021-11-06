/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:25:16 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/06 13:10:14 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int				i;
	int				k;
	int				lens;
	int				lend;

	i = 0;
	lend = ft_strlen((char *)dst);
	lens = ft_strlen((char *)src);
	k = (size - lend - 1);
	if (k >= 0)
	{
		dst += lend;
		while (i < k && src[i])
			*dst++ = src[i++];
		*dst = '\0';
		return (lens + lend);
	}
	return (lens + size);
}
