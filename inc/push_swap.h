/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:58:09 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 21:49:26 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <shared.h>
# include <libft/ft_dlst.h>

// sort
void		handle_sort(t_global *tab, int n_cnt);

// sort small
void		sort_small(t_global *tab, int n_cnt);
void		smart_push(t_global *tab);
void		sort_a(t_global *tab);

// sort big
void		sort_big(t_global *tab);
int			smart_rotate_b(t_global *tab);

#endif
