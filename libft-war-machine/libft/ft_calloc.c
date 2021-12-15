/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <azouaiga@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:52:59 by azouaiga          #+#    #+#             */
/*   Updated: 2021/12/15 05:42:49 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		i;

	i = 0;
	ptr = malloc(size * count);
	if (ptr)
	{
		while ((int)(count * size) > i)
		{
			*(char *)(ptr + i) = 0;
			i++;
		}
		return (ptr);
	}
	return (0);
}
