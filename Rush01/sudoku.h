/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 10:55:55 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/17 16:14:39 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SUDOKU_H
#define		SUDOKU_H

void	ft_print_error(void);
void	ft_putchar(char c);
void	ft_print_sudoku(char **sudoku);
char	**ft_make_sudoku(char **sudoku1, char **sudoku2, int y, int x);
int		ft_resolve_sudoku(char **sudoku, char **tab, int p);
int		ft_chk_square(char **sudoku, int nb, int y, int x);
int		ft_chk_col(char **sudoku, int nb, int y, int x);
int		ft_chk_line(char **sudoku, int nb, int y, int x);


#endif
