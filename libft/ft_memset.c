/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouaiga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:44:17 by azouaiga          #+#    #+#             */
/*   Updated: 2021/11/02 17:57:11 by azouaiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	*p;

	count = 0;
	p = b;
	while (count < len)
	{
		p[count] = (unsigned char)c;
		count++;
	}
}
