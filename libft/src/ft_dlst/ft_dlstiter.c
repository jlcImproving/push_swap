/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:38:13 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:38:21 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

void	ft_dlstiter(t_dlist *dlst, void (*f)(void *))
{
	if (!dlst || !f)
		return ;
	while (dlst)
	{
		f(dlst->data);
		dlst = dlst->next;
	}
}
