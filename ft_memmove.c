/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:41:39 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/14 19:20:34 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n = 0)
		return (dest);
	if (!dest || !src)
		return (NULL);
	while (src[i] && i < n)
	{
		j = 0;
		while (dest[j] && j < n)
		{
			if (&dest[j] == &src[i])
				return (NULL);
			j++;
		}
		i++;
	}
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
