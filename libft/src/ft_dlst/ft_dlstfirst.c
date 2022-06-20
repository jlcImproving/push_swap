/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distfirst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:37:43 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:37:51 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

t_dlist	*ft_dlstfirst(t_dlist *dlst)
{
	if (!dlst)
		return (NULL);
	while (dlst->prev)
		dlst = dlst->prev;
	return (dlst);
}
