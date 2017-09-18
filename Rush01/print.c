/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:32:27 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/18 09:16:22 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		ft_putchar(str[a]);
		a++;
	}
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
