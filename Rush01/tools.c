/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:35:40 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/17 16:03:53 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char **ft_make_sudoku(char **sudoku1, char **sudoku2, int y, int x)
{
	sudoku2 = malloc(sizeof(char *) * 10);
	while (y <= 8)
	{
		x = 0;
		sudoku2[y] = malloc(sizeof(char *) * 10);
		while (x <= 8)
		{
			if (sudoku1[y][x] == '.')
			{
				sudoku1[y][x] = '0';
				sudoku2[y][x] = 0;
			}
			else
				sudoku2[y][x] = 1;
			x++;
		}
		y++;
	}
	return (sudoku2);
}
