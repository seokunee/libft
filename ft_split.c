/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:22:39 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/23 01:11:06 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_strs(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (c != str[i])
		{
			while (str[i] && c != str[i])
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

char	*strdup_split(char const *s, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

size_t	strlen_split(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**errorhandler(void)
{
	char	**arr;

	arr = (char **)malloc(sizeof(char *));
	if (!arr)
		return (NULL);
	arr[0] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t		str_num;
	size_t		i;
	size_t		len;
	char		**arr;

	if (!s || *s == '\0')
		return (errorhandler());
	i = 0;
	len = 0;
	str_num = count_strs(s, c);
	arr = (char **)malloc(sizeof(char *) * (str_num + 1));
	if (arr == NULL)
		return (NULL);
	while (i < str_num)
	{
		while (s[0] == c)
			s++;
		len = strlen_split(s, c);
		arr[i] = strdup_split(s, len);
		s += len;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
