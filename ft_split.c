/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:22:39 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/20 23:40:00 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_strs(char *str, char *c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (c == str[i])
		{
			while (str[i] && c == str[i])
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		str_num;
	size_t		i;
	size_t		len;
	char		**arr;

	i = 0;
	len = 0;
	str_num = count_strs(s, c);
	arr = (char **)malloc(sizeof(char *) * (str_num + 1));
	if (arr == NULL)
		return (NULL);
	while (i < str_num)
	{
		while (is_charset(c, *s))
			s++;
		len = ft_strlen(s, c);
		arr[i] = ft_strdup(s, len);
		s += len;
		i++;
	}
	arr[i] = 0;
	return (arr);
}