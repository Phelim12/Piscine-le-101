/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:35:40 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/17 11:06:21 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_make_sudoku(char **sudoku)
{
	int y;
	int x;

	y = 0;
	while (y <= 8)
	{
		x = 0;
		while (x <= 8)
		{
			if (sudoku[y][x] == '.')
				sudoku[y][x] = '0';
			x++;
		}
		y++;
	}
}
