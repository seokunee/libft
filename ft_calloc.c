/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokhun <seokhun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:35:26 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/18 15:10:57 by seokhun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void			*p;
	size_t			i;
	size_t			j;
	unsigned char	*tmp;

	p = (void *)malloc(number * size);
	if (!p)
		return (NULL);
	tmp = (unsigned char *)p;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < number)
		{
			tmp[i + j] = 0;
			j++;
		}
		i += number;
	}
	return (p);
}
