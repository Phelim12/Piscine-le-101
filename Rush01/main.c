/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:32:44 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/18 10:50:16 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int main(int argc, char **argv)
{
	char **tab2;

	tab2 = 0;
	tab2 = ft_make_sudoku(argv + 1, tab2, 0, 0);
	if (argc == 10)
	{
		if (ft_chk_args(argv + 1) || ft_check_valid(argv + 1, tab2, 0))
		{
			ft_putstr("Error");
			return (0);
		}
		ft_resolve_sudoku(argv + 1, tab2, 0);
		ft_print_sudoku(argv + 1);
	}
	else
		ft_putstr("Error");
	return (0);
}
