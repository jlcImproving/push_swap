/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:01:28 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 21:37:35 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int	try_push_next(t_global *tab, int swap)
{
	if (*(int *)tab->head_b->data == tab->b_sz - 2 && !swap)
	{
		pa(tab, 1);
		return (1);
	}
	return (0);
}

int	smart_rotate_b(t_global *tab)
{
	int	cnt;
	int	swap;
	int	sz;

	cnt = 0;
	swap = 0;
	sz = tab->b_sz;
	tab->b = tab->head_b;
	while (*(int *)tab->b->data != sz - 1 && ++cnt)
		tab->b = tab->b->next;
	while (*(int *)tab->head_b->data != sz - 1)
	{
		if (!try_push_next(tab, swap))
		{
			if (cnt > sz / 2)
				rrb(tab, 1);
			else
				rb(tab, 1);
		}
		else
			swap = 1;
	}
	return (swap);
}
