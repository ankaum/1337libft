/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <azouaiga@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:36:59 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/28 13:13:31 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	if (s == 0)
		return (0);
	j = len;
	if (ft_strlen(s) < start)
		j = 0;
	substr = malloc(len + 1);
	if (!substr)
		return (0);
	k = start;
	while (j--)
	{
		substr[i] = s[k];
		i++;
		k++;
	}
	substr[i] = '\0';
	return (substr);
}
