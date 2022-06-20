/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:04:01 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:04:10 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_mem.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*save;

	save = dst;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (save);
}
