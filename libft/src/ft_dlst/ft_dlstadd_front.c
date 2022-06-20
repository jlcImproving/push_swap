/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:35:53 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:36:04 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

void	ft_dlstadd_front(t_dlist **dlst, t_dlist *new)
{
	if (!dlst || !new)
		return ;
	if (*dlst)
	{
		new->next = *dlst;
		(*dlst)->prev = new;
		*dlst = new;
	}
	else
		*dlst = new;
}
