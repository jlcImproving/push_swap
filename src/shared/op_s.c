/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:01:28 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 21:46:08 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft/ft_printf.h>

static int	swap(t_dlist **head, int sz)
{
	if (!*head)
		return (1);
	if (sz < 2)
		return (1);
	if (sz == 2)
	{
		(*head)->next->next = *head;
		*head = (*head)->next;
		(*head)->next->next = NULL;
		(*head)->prev = NULL;
		(*head)->next->prev = *head;
	}
	else
	{
		(*head)->next = (*head)->next->next;
		(*head)->next->prev->next = *head;
		(*head)->prev = (*head)->next->prev;
		(*head)->next->prev->prev = NULL;
		(*head)->next->prev = *head;
		*head = (*head)->prev;
	}
	return (0);
}

void	sa(t_global *tab, int print)
{
	if (swap(&tab->head_a, tab->a_sz))
		return ;
	if (print)
		ft_printf("sa\n");
}

void	sb(t_global *tab, int print)
{
	if (swap(&tab->head_b, tab->b_sz))
		return ;
	if (print)
		ft_printf("sb\n");
}

void	ss(t_global *tab, int print)
{
	int	exec;

	exec = 2;
	if (swap(&tab->head_a, tab->a_sz))
		exec--;
	if (swap(&tab->head_b, tab->b_sz))
		exec--;
	if (print && exec)
		ft_printf("ss\n");
}
