/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:20:01 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:20:08 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_str.h>

size_t	ft_strlcat(char *dst, const char *src,
	size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	dst += d_len;
	if (dstsize > d_len)
		ft_strlcpy(dst, src, dstsize - d_len);
	if (dstsize < d_len)
		return (s_len + dstsize);
	return (d_len + s_len);
}
