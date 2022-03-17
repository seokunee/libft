/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:41:25 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/17 18:03:42 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*rs;
	char	cc;
	size_t	i;

	i = 0;
	cc = (char)c;
	while (s[i])
	{
		if (s[i] == cc)
			rs = (char *)(s + i);
		i++;
	}
	if (!c)
		return ((char *)(s + i));
	return (rs);
}
