/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 09:58:33 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/15 11:12:19 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int a;

	a = 0;
	if (min > max)
	{
		*range = NULL;
	}
	tab = malloc(sizeof(int) * (max - min) + 1);
	while ((min + a) < max)
	{
		tab[a] = min + a;
		a++;
	}
	tab[a] = '\0';
	*range = tab;
	return (a);
}
