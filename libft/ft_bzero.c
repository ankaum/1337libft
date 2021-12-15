/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <azouaiga@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:57:21 by azouaiga          #+#    #+#             */
/*   Updated: 2021/12/15 05:42:48 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			count;
	unsigned char	*p;

	count = 0;
	p = s;
	while (count < n)
	{
		p[count] = 0;
		count++;
	}
}
