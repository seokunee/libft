/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:25:58 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/17 15:35:26 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	p;

	tmp = (unsigned char *)s;
	i = 0;
	p = (unsigned char)c;
	while (i < n)
	{
		tmp[i] = p;
		i++;
	}
	return (tmp);
}
