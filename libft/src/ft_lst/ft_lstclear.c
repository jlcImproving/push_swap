/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:57:29 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:57:37 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_lst.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	void	*prev;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->data);
		prev = *lst;
		*lst = (*lst)->next;
		free(prev);
	}
	*lst = NULL;
}
