/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:39:46 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:39:56 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

t_dlist	*ft_dlstmap(t_dlist *dlst, void *(*f)(void *), void (*del)(void *))
{
	t_dlist	*new;
	t_dlist	*newdlst;

	if (!dlst || !f)
		return (NULL);
	newdlst = NULL;
	while (dlst)
	{
		new = ft_dlstnew(f(dlst->data));
		if (!new)
		{
			ft_dlstclear(&newdlst, del);
			return (NULL);
		}
		ft_dlstadd_back(&newdlst, new);
		dlst = dlst->next;
	}
	return (newdlst);
}
