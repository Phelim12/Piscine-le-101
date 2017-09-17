/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:32:27 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/17 16:22:15 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <unistd.h>

int		ft_chk_args(char **argv)
{
	
}

void	ft_print_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_print_sudoku(char **sudoku)
{
	int y;
	int x;

	y = 0;
	while (y <= 8)
	{
		x = 0;
		while (x <= 8)
		{
			ft_putchar(sudoku[y][x]);
			if (x < 8)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
