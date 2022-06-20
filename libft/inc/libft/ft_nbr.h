/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:22:34 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 22:22:36 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NBR_H
# define FT_NBR_H

// int
int		ft_intlen(int n);
int		ft_intlen_base(int n, int base_len);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

// unsigned int
int		ft_uintlen(unsigned int n);
int		ft_uintlen_base(unsigned int n, int base_len);

// unsigned long
int		ft_ulonglen(unsigned long n);
int		ft_ulonglen_base(unsigned long n, int base_len);

#endif
