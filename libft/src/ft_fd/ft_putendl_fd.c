/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:51:48 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:51:50 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_fd.h>

int	ft_putendl_fd(char *s, int fd)
{
	int	cnt;

	if (!s)
		return (0);
	cnt = 0;
	cnt += ft_putstr_fd(s, fd);
	cnt += ft_putchar_fd('\n', fd);
	return (cnt);
}
