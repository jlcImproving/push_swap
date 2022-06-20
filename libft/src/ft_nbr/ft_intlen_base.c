/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:06:45 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:06:55 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen_base(int n, int base_len)
{
	int	cnt;

	cnt = !n;
	while (n)
	{
		n /= base_len;
		cnt++;
	}
	return (cnt);
}
