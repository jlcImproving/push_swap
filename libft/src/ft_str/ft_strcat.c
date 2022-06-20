/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:17:12 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:17:20 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_str.h>

char	*ft_strcat(char *s1, const char *s2)
{
	char	*save;

	save = s1;
	s1 += ft_strlen(s1);
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (save);
}
