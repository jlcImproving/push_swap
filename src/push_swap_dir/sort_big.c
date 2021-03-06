/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alme <jde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:01:28 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/20 19:54:30 by jde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static void	push_in_chunks(t_global *tab, int chunk_sz)
{
	int	chunk_n;
	int	cnt;

	chunk_n = 1;
	cnt = 0;
	while (tab->a_sz)
	{
		if (*(int *)tab->head_a->data < (chunk_sz * chunk_n))
		{
			pb(tab, 1);
			if (*(int *)tab->head_b->data
				< chunk_sz * chunk_n - (chunk_sz / 2))
				rb(tab, 1);
			cnt++;
		}
		else
			ra(tab, 1);
		if (cnt == chunk_sz * chunk_n)
			chunk_n++;
	}
}

static void	push_back_in_order(t_global *tab)
{
	while (tab->b_sz)
	{
		if (smart_rotate_b(tab))
		{
			pa(tab, 1);
			if (tab->b_sz > 1
				&& *(int *)tab->head_b->data < *(int *)tab->head_b->next->data)
				ss(tab, 1);
			else
				sa(tab, 1);
		}
		else
			pa(tab, 1);
	}
}

void	sort_big(t_global *tab)
{
	int	chunk_sz;

	chunk_sz = tab->a_sz / 2;
	push_in_chunks(tab, chunk_sz);
	push_back_in_order(tab);
}
