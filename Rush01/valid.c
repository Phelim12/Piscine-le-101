/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:32:08 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/18 10:36:19 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_chk_square2(char **sudoku, char nb, int y, int x)
{
	int	cp_y;
	int cp_x;
	int chk;

	chk = 0;
	cp_y = y - (y % 3);
	cp_x = x - (x % 3);
	y = cp_y;
	while (y < cp_y + 3)
	{
		x = cp_x;
		while (x < cp_x + 3)
		{
			if (nb == sudoku[y][x])
				chk++;
			x++;
		}
		y++;
	}
	if (chk == 1)
		return (1);
	return (0);
}

int		ft_chk_line2(char **sudoku, char nb, int y, int x)
{
	int cp_x;
	int chk;

	chk = 0;
	cp_x = 0;
	while (cp_x < 9)
	{
		if (nb == sudoku[y][cp_x])
			chk++;
		cp_x++;
	}
	if (chk == 1)
		return (1);
	return (0);
}

int		ft_chk_col2(char **sudoku, char nb, int y, int x)
{
	int cp_y;
	int chk;

	chk = 0;
	cp_y = 0;
	while (cp_y < 9)
	{
		if (nb == sudoku[cp_y][x])
			chk++;
		cp_y++;
	}
	if (chk == 1)
		return (1);
	return (0);
}
