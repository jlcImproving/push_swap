/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tab_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:15:05 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:15:14 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_printf.h>

t_print	*ft_initialise_tab(t_print *tab)
{
	tab->wd = 0;
	tab->dot = 0;
	tab->dash = 0;
	tab->zero = 0;
	tab->sharp = 0;
	tab->sp = 0;
	tab->plus = 0;
	tab->tlen = 0;
	tab->sign = 0;
	tab->is_zero = 0;
	tab->perc = 0;
	tab->sp = 0;
	return (tab);
}

t_print	*ft_clear_flags_tab(t_print *tab)
{
	tab->wd = 0;
	tab->dot = 0;
	tab->dash = 0;
	tab->zero = 0;
	tab->sharp = 0;
	tab->sp = 0;
	tab->plus = 0;
	tab->sign = 0;
	tab->is_zero = 0;
	tab->perc = 0;
	tab->sp = 0;
	return (tab);
}
