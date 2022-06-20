/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:55:24 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 21:49:46 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHARED_H
# define SHARED_H

# include <libft/ft_dlst.h>

typedef struct s_global
{
	t_dlist	*a;
	t_dlist	*b;
	t_dlist	*head_a;
	t_dlist	*head_b;
	int		a_sz;
	int		b_sz;
}	t_global;

// handle args
int			handle_args(int ac, char **av, int **arr);
int			check_args(char **nbrs);

// stacks
t_global	*create_stack(void);
void		free_tab(t_global *tab);
int			initialise_tab(t_global *tab, int *arr, int n);

// rules
void		sa(t_global *tab, int print);
void		sb(t_global *tab, int print);
void		ss(t_global *tab, int print);
void		pa(t_global *tab, int print);
void		pb(t_global *tab, int print);
void		ra(t_global *tab, int print);
void		rb(t_global *tab, int print);
void		rr(t_global *tab, int print);
void		rra(t_global *tab, int print);
void		rrb(t_global *tab, int print);
void		rrr(t_global *tab, int print);

#endif
