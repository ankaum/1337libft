/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:55:06 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/05 18:13:13 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h" /*temporarily*/

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
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
		d[count] = s[count];
		count++;
	}
	return (dst);
}
