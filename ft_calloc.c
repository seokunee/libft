/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:35:26 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/17 20:41:40 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t number, size_t size)
{
	void			*p;
	size_t			i;
	unsigned char	*tmp;

	p = (void *)malloc(number * size);
	tmp = s;
	i = 0;
	if (!p)
		return (NULL);
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
	return (p);
}
