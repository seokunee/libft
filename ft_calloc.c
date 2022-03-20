/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:35:26 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/21 00:35:42 by seokchoi         ###   ########.fr       */
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
