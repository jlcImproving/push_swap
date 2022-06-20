/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:36:28 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:36:36 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

void	ft_dlstclear(t_dlist **dlst, void (*del)(void *))
{
	void	*prev;

	if (!dlst || !del)
		return ;
	while (*dlst)
	{
		del((*dlst)->data);
		prev = *dlst;
		*dlst = (*dlst)->next;
		free(prev);
	}
	*dlst = NULL;
}
