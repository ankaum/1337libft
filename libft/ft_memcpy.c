/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:55:06 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/04 21:26:11 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h" /*temporarily*/

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			count;
	unsigned char	*s;
	unsigned char	*d;

	if (!src || !dst)
		return (0);
	count = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (count < n)
	{
		s[count] = d[count];
		count++;
	}
	return (dst);
}
