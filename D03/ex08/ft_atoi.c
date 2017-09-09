/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 08:07:46 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/09 12:08:35 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_check_strsym(char a, char b)
{
	if ((a == '-' || a == '+') && (b == '-' || b == '+'))
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int nb;
	int neg;
	int a = 0;

	neg = 1;
	
	nb = 0;
	while (!(str[a] <= '9' && str[a] >= '0'))
		a++;
	if (str[a - 1] == '-')
		neg = -1;
	if (ft_check_strsym(str[a - 1], str[a - 2]))
		return (nb);
	while (str[a] <= '9' && str[a] >='0')
		a++;
	a--;
	while (str[a] <= '9' && str[a] >= '0')
	{
		nb += neg * (str[a] - '0');
		a--;
		neg *= 10;
	}
	printf("nb = %d", nb);
	return (nb);
}

int		main()
{
	int nb1;
	char nb[300] = "   -+919+213981242i34j";
	
	nb1 = ft_atoi(nb);
	printf("nb = %d", nb1);
}
