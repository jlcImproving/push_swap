/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:31:45 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:31:54 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_char.h>

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
