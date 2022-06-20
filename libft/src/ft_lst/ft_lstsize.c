/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:00:37 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:00:46 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_lst.h>

int	ft_lstsize(t_list *lst)
{
	size_t	len;

	if (!lst)
		return (0);
	len = 0;
	while (lst && ++len)
		lst = lst->next;
	return (len);
}
