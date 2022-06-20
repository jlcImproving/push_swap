/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:35:18 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:35:29 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

void	ft_dlstadd_back(t_dlist **dlst, t_dlist *new)
{
	t_dlist	*last;

	if (!dlst || !new)
		return ;
	if (*dlst)
	{
		last = ft_dlstlast(*dlst);
		last->next = new;
		new->prev = last;
	}
	else
		*dlst = new;
}
