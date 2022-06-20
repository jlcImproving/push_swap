/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 23:21:48 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 23:21:59 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft/ft_str.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*out;
	size_t	i;

	if (!s || !f)
		return (NULL);
	out = malloc(ft_strlen(s) + 1);
	if (!out)
		return (NULL);
	i = -1;
	while (s[++i])
		out[i] = f(i, (char)s[i]);
	out[i] = '\0';
	return (out);
}
