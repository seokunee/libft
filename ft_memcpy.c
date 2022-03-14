/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:10:10 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/14 17:38:39 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src)
		return (NULL);
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
}
