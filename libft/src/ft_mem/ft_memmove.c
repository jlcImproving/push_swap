/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:04:30 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:04:37 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_mem.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*save;

	if (!dst && !src)
		return (NULL);
	save = dst;
	if (src < dst)
	{
		dst += len;
		src += len;
		while (len--)
			*(unsigned char *)--dst = *(unsigned char *)--src;
	}
	else
		while (len--)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (save);
}
