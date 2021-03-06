/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulonglen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:10:17 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:10:24 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ulonglen(unsigned long n)
{
	int	cnt;

	cnt = 1;
	while (n > 9)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}
