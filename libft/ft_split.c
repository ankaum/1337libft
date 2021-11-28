/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <azouaiga@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:38:34 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/28 13:13:40 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	word_count(char const *s, char c)
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

static int	word_length_count(int *i, char c, char const *s)
{
	int	count;

	while (s[*i])
	{
		if (s[*i] == c)
		{
			(*i)++;
			count++;
		}
		else
			return (count);
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	word_count(s, c);
	tab = (char **)malloc(8 * (word_count(s, c) + 1));
	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (! (s[i] == c))
		{
			tab[k] = (char *)malloc(1 * (word_length_count(&i, c, s) + 1));
			j = 0;
			while (!(s[i] == c))
			{
				tab[k][j] = s[i];
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
