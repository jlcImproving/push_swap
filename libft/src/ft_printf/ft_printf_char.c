/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:12:09 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:12:17 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_printf.h>

static void	ft_handle_left_align(t_print *tab)
{
	tab->wd--;
	while (tab->wd-- > 0)
	{
		if (tab->zero)
			tab->tlen += write(1, "0", 1);
		else
			tab->tlen += write(1, " ", 1);
	}
}

static void	ft_handle_right_align(t_print *tab)
{
	tab->wd--;
	while (tab->wd-- > 0)
		tab->tlen += write(1, " ", 1);
}

void	ft_printf_char(t_print *tab)
{
	char	c;

	c = va_arg(tab->args, int);
	if ((tab->zero || tab->wd) && !tab->dash)
		ft_handle_left_align(tab);
	tab->tlen += write(1, &c, 1);
	if (tab->wd && tab->dash)
		ft_handle_right_align(tab);
}
