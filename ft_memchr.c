/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:05:59 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/17 18:00:49 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	cc;
	size_t			i;

	i = 0;
	cc = (unsigned char)c;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == cc)
			return ((unsigned char *)s + i);
		i++;
	}
	return (0);
}
