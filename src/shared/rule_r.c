/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_r.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:01:28 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 21:45:40 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft/ft_printf.h>

static int	shift(t_dlist **head, int sz)
{
	if (!*head)
		return (1);
	if (sz < 2)
		return (1);
	*head = (*head)->next;
	(*head)->prev->prev = ft_dlstlast(*head);
	(*head)->prev->next = NULL;
	(*head)->prev->prev->next = (*head)->prev;
	(*head)->prev = NULL;
	return (0);
}

void	ra(t_global *tab, int print)
{
	if (shift(&tab->head_a, tab->a_sz))
		return ;
	if (print)
		ft_printf("ra\n");
}

void	rb(t_global *tab, int print)
{
	if (shift(&tab->head_b, tab->b_sz))
		return ;
	if (print)
		ft_printf("rb\n");
}

void	rr(t_global *tab, int print)
{
	int	exec;

	exec = 2;
	if (shift(&tab->head_a, tab->a_sz))
		exec--;
	if (shift(&tab->head_b, tab->b_sz))
		exec--;
	if (print && exec)
		ft_printf("rr\n");
}
