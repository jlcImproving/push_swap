/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:32:19 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:32:28 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_char.h>

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
