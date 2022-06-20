/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaocharneca <joaocharneca@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:01:28 by joaocharneca      #+#    #+#             */
/*   Updated: 2022/06/19 21:36:20 by joaocharneca     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	t_global	*tab;
	int			*arr;
	int			n_cnt;

	if (ac == 1)
		return (EXIT_SUCCESS);
	n_cnt = handle_args(ac, av, &arr);
	if (n_cnt < 0)
		return (EXIT_FAILURE);
	tab = create_stack();
	if (initialise_tab(tab, arr, n_cnt))
	{
		free(arr);
		return (EXIT_FAILURE);
	}
	free(arr);
	handle_sort(tab, n_cnt);
	free_tab(tab);
	return (EXIT_SUCCESS);
}
