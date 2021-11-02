/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:55:06 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/02 19:56:52 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			count;
	unsigned char	*p;

	count = 0;
	p = src;
	while (count < len)
	{
		dst[count] = p[count];
		count++;
	}
	return (dst);
}
