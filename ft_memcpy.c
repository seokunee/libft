/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:10:10 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/15 20:24:53 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
