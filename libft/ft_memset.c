/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <azouaiga@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:44:17 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/16 00:22:50 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	*p;

	count = 0;
	p = b;
	while (count < len)
	{
		p[count] = (unsigned char)c;
		count++;
	}
	return (p);
}
