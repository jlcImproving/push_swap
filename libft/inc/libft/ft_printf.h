/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:23:11 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:23:13 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <libft/ft_str.h>
# include <libft/ft_nbr.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_print
{
	va_list	args;
	int		wd;
	int		dot;
	int		dash;
	int		zero;
	int		sharp;
	int		sp;
	int		plus;
	int		tlen;
	int		sign;
	int		is_zero;
	int		perc;
}	t_print;

int	ft_printf(const char *format, ...);

#endif
