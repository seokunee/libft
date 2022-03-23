/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:49:02 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/23 15:14:43 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	if (!*list)
		return ;
	while (*lst->next)
	{
		tmp = *lst;
		*lst = *lst->next;
		del(tmp->content);
		free(tmp);
	}
	free(*lst);
	*lst = NULL;
}
