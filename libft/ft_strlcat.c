/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:25:16 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/04 21:37:58 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	res;

	a = 0;
	b = 0;
	res = 0;
	while (dst[a])
		a++;
	while (src[res])
		res++;
	if (dstsize <= a)
		res = res + dstsize;
	else
		res = res + a;
	while (src[b] && (a + 1) < dstsize)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (res);
}
