/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <azouaiga@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:25:16 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/28 16:36:22 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	len;
	size_t	i;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	len = dest_len;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && len < size - 1)
		dst[len++] = src[i++];
	dst[len] = 0;
	return (dest_len + src_len);
}
