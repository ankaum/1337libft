/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <azouaiga@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:40:38 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/16 00:24:31 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*(haystack + i) != '\0' && i < (int)len)
	{
		while (*(needle + j) == *(haystack + i) && i < (int)len)
		{
			j++;
			i++;
			if (*(needle + j) == '\0')
				return ((char *)haystack + (i - j));
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (0);
}
