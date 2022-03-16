/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokhun <seokhun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 22:51:07 by seokhun           #+#    #+#             */
/*   Updated: 2022/03/17 00:55:23 by seokhun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < len - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include<stdio.h>
#include<string.h>
int	main(void)
{
	char s1[] = "hello world";
	char s2[] = "hello holla";
	printf("%d\n", strncmp(s1, s2, 7));
	// printf("%d\n", ft_strncmp(s1, s2, 7));
	return (0);
}
