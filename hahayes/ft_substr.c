/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <azouaiga@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:25:20 by omoussao          #+#    #+#             */
/*   Updated: 2021/11/28 18:00:23 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
	{
		str = malloc(1);
		str[0] = 0;
		return (str);
	}
	str = malloc(len * (len <= slen - start)
			+ (slen - start) * (len > slen - start) + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < slen && i < len)
		str[i] = s[start + i];
	str[i] = 0;
	return (str);
}
