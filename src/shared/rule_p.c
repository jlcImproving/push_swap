/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:01:28 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 21:45:16 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft/ft_printf.h>

static int	push(t_dlist **head_dst, t_dlist **head_src, int *d_sz, int *s_sz)
{
	if (!*head_src)
		return (1);
	if (*s_sz < 1)
		return (1);
	if (*s_sz == 1)
	{
		(*head_src)->next = *head_dst;
		*head_dst = *head_src;
		*head_src = NULL;
	}
	else
	{
		*head_src = (*head_src)->next;
		(*head_src)->prev->next = *head_dst;
		*head_dst = (*head_src)->prev;
		(*head_src)->prev = NULL;
	}
	if (*d_sz)
		(*head_dst)->next->prev = *head_dst;
	(*s_sz)--;
	(*d_sz)++;
	return (0);
}

void	pa(t_global *tab, int print)
{
	if (push(&tab->head_a, &tab->head_b, &tab->a_sz, &tab->b_sz))
		return ;
	if (print)
		ft_printf("pa\n");
}

void	pb(t_global *tab, int print)
{
	if (push(&tab->head_b, &tab->head_a, &tab->b_sz, &tab->a_sz))
		return ;
	if (print)
		ft_printf("pb\n");
}
