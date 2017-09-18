/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:35:40 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/18 07:37:04 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int		ft_chk_args(char **argv)
{
	int y;
	int x;

	y = 0;		
	while (y <= 8)
	{
		if ((ft_strlen(argv[y])) != 9)
			return (1);
		x = 0;
		while (x <= 8)
		{
			if (!(argv[y][x] == '0' || (argv[y][x] <= '9' && argv[y][x] >= '1')))
				return (1);
			x++;
		}
		y++;
	}
	return (0);
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
