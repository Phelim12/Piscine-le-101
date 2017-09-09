/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_interger_table.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 16:10:26 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/09 16:57:15 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_interger_table(int *tab, int size)
{
	int a;
	int swap;
	int i = 0;

	a = 0;
	while (a < size)
	{
		if(tab[a] > tab[a + 1])
		{
			swap = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = swap;
			a = 0;
		}
		else
			a++;
	}
}

int main()
{
	int tableau[18] = {3, 7, 2, 5, 0, 6, 9, 0, 6, 78, 23, 512, 54, 78, 23, 1, 3, 5};
	int i = 0;
	ft_sort_interger_table(tableau, 18);
	
	while(i < 18)
		printf("ss = %d", tableau[i++]);
}
