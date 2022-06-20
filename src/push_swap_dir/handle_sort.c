/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:01:28 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 21:35:34 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int	is_sorted(t_dlist *head)
{
	while (head->next)
	{
		if (*(int *)head->data > *(int *)head->next->data)
			return (0);
		head = head->next;
	}
	return (1);
}

void	handle_sort(t_global *tab, int n_cnt)
{
	if (n_cnt < 2 || is_sorted(tab->head_a))
		return ;
	if (n_cnt <= 5)
		sort_small(tab, n_cnt);
	else
		sort_big(tab);
}
