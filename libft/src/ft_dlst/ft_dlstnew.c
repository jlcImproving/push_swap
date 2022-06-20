/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnews.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:42:36 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:42:49 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

t_dlist	*ft_dlstnew(void *data)
{
	t_dlist	*newdlst;

	newdlst = (t_dlist *)malloc(sizeof(t_dlist));
	if (!newdlst)
		return (NULL);
	newdlst->data = data;
	newdlst->next = NULL;
	newdlst->prev = NULL;
	return (newdlst);
}
