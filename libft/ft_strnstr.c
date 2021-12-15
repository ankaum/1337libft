/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <azouaiga@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:40:38 by azouaiga          #+#    #+#             */
/*   Updated: 2021/12/15 05:43:35 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (len == 0 && needle[0])
		return (NULL);
	if (!needle[0])
		return ((char *)haystack);
	i = -1;
	while (++i < len && haystack[i])
	{
		j = -1;
		while (needle[++j] && i + j < len)
		{
			if (needle[j] != haystack[i + j])
				break ;
		}
		if (!needle[j])
			return ((char *)(haystack + i));
	}
	return (NULL);
}
