/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulonglen_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:09:35 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:09:43 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ulonglen_base(unsigned long n, int base_len)
{
	int	cnt;

	cnt = 1;
	while (n >= (unsigned long)base_len)
	{
		n /= base_len;
		cnt++;
	}
	return (cnt);
}
