/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 16:09:33 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/16 16:26:54 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < length)
	{
		if (tab[a] > b)
			b = tab[a];
		a++;
	}
	return (b);
}
