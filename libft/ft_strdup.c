/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <azouaiga@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:36:29 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/16 00:23:29 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	char		*p;
	int			i;

	i = 0;
	while (s1[i])
		i++;
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	p = str;
	while (*s1)
		*p++ = *(unsigned char *)s1++;
	*p = '\0';
	return (str);
}
