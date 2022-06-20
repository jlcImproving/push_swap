/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:43:24 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:43:38 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_dlst.h>

int	ft_dlstsize(t_dlist *dlst)
{
	size_t	len;

	if (!dlst)
		return (0);
	len = 0;
	while (dlst && ++len)
		dlst = dlst->next;
	return (len);
}
