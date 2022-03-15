/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:41:39 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/15 18:58:07 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (dest < src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}
