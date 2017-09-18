/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:32:44 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/18 16:13:23 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_job(char **sudoku, char **tab2, int rev)
{
	ft_resolve_sudoku(sudoku, tab2, 0);
	if (rev == 1)
		ft_print_rev_sudoku(sudoku);
	else
		ft_print_sudoku(sudoku);
}

int main(int argc, char **argv)
{
	char	**tab2;
	int		rev;

	rev = 1;
	tab2 = 0;
	if (argc == 10)
	{
		if ((rev = ft_first_line(argv[1])))
			ft_rev_sudoku(argv + 1);
		tab2 = ft_make_sudoku(argv + 1, tab2, 0, 0);
		if (ft_chk_args(argv + 1) || ft_check_valid(argv + 1, tab2, 0))
			ft_putstr("Error\n");
		else 
			ft_job(argv + 1, tab2, rev);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
