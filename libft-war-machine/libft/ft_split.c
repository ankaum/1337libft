/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:38:34 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/06 20:53:13 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static unsigned int splitcount
char **ft_split(char const *s, char c)
{
	unsigned int	lens;
	unsigned int	lensplits;
	char			**result;
	unsigned int	i;
	unsigned int	j;
	lens = ft_strlen(s);

