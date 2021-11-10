/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:38:34 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/07 20:32:10 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;
	int		count;

	count = wordcount(s, c);
	tab = (char)malloc(8 * count);
	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (! (s[i] == c))
		{
			tab[k] = (char)malloc(1 * 100);
			j = 0;
			while (!(str[i] == c))
			{
				tab[k][j] = str[i];
				i++;
				j++;
			}
			tab[k][j] = '\0';
			k++;
		}
		else
			i++;
	}
	tab[i] = 0;
	return (tab);
}
