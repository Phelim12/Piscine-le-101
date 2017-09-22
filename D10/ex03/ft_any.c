/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:27:29 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/22 19:48:48 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int a;

	a = 0;
	while (tab[a])
	{
		if (f(tab[a]) == 1)
			return (1);
		a++;
	}
	return (0);
}
