/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 13:18:22 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/15 11:12:24 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int *tab;
	int a;

	a = 0;
	if (min > max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min) + 1);
	while ((min + a) < max)
	{
		tab[a] = min + a;
		a++;
	}
	return (tab);
}
