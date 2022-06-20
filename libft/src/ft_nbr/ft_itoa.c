/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:07:43 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:07:50 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_mem.h>

char	*ft_itoa(int n)
{
	size_t			i;
	char			*out;
	short			sign;
	unsigned int	pow_ten;

	i = 1;
	pow_ten = 1;
	sign = 0;
	if (n < 0 && ++sign)
		n = -n;
	while (n / pow_ten / 10 && i++)
		pow_ten *= 10;
	out = ft_calloc(i + sign + 1, 1);
	if (!out)
		return (NULL);
	i = 0;
	if (sign)
		out[i++] = '-';
	while (pow_ten)
	{
		out[i++] = n / pow_ten + '0';
		n %= pow_ten;
		pow_ten /= 10;
	}
	return (out);
}
