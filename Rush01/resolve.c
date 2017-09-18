/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:32:08 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/18 10:42:28 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_chk_line(char **sudoku, char nb, int y, int x)
{
	int cp_x;

	cp_x = 0;
	while (cp_x < 9)
	{
		if (nb == sudoku[y][cp_x])
			return (0);
		cp_x++;
	}
	return (1);
}

int		ft_chk_col(char **sudoku, char nb, int y, int x)
{
	int cp_y;

	cp_y = 0;
	while (cp_y < 9)
	{
		if (nb == sudoku[cp_y][x])
			return (0);
		cp_y++;
	}
	return (1);
}

int		ft_chk_square(char **sudoku, char nb, int y, int x)
{
	int cp_y;
	int cp_x;
	
	cp_y = y - (y % 3);
	cp_x = x - (x % 3);
	y = cp_y;
	while (y < cp_y + 3)
	{
		x = cp_x;
		while (x < cp_x + 3)
		{
			if (nb == sudoku[y][x])
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

int		ft_resolve_sudoku(char **sudoku, char **tab, int p)
{
	char nb;

	nb = '1';
	if ((p / 9) == 9)
		return (1);
	if (tab[p / 9][p % 9] == 1)
		return (ft_resolve_sudoku(sudoku, tab, p + 1));
	while (nb <= '9')
	{	
		if (ft_chk_line(sudoku, nb, p / 9, p % 9) && ft_chk_col(sudoku, nb, p / 9, p % 9) && ft_chk_square(sudoku, nb, p / 9, p % 9))
		{
			sudoku[p / 9][p % 9] = nb;
			if (ft_resolve_sudoku(sudoku, tab, p + 1))
				return (1);
		}
		nb++;
	}
	sudoku[p / 9][p % 9] = '0';
	return (0);
}


int		ft_check_valid(char **sudoku, char **tab, int p)
{
	char nb;
	int val;
	int y;
	int x;

	val = 0;
	nb = 0;
	y = p / 9;
	x = p % 9;
	if (y == 9)
		return (0);
	if (tab[y][x] == 0)
		return (ft_check_valid(sudoku, tab, p + 1));
	nb = sudoku[y][x];
	val += ft_chk_line2(sudoku, nb, y, x);
	val += ft_chk_col2(sudoku, nb, y, x);
	val += ft_chk_square2(sudoku, nb, y, x);
	if (val == 3)
		return (ft_check_valid(sudoku, tab, p + 1));
	else
		return (1);
}
