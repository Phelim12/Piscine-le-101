/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 16:10:26 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/10 10:20:44 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int swap;
	int a;

	a = 0;
	while (a < size)
	{
		if (tab[a] > tab[a + 1])
		{
			swap = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = swap;
			a = -1;
		}
		a++;
	}
}
