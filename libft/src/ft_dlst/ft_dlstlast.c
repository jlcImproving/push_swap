/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:38:57 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:39:01 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

t_dlist	*ft_dlstlast(t_dlist *dlst)
{
	if (!dlst)
		return (NULL);
	while (dlst->next)
		dlst = dlst->next;
	return (dlst);
}
