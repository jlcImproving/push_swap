/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:00:08 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:00:17 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_lst.h>

t_list	*ft_lstnew(void *data)
{
	t_list	*newlst;

	newlst = (t_list *)malloc(sizeof(t_list));
	if (!newlst)
		return (NULL);
	newlst->data = data;
	newlst->next = NULL;
	return (newlst);
}
