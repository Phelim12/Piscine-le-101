/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 08:07:46 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/09 10:50:42 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_keep_numb(char *str)
{
	int a;
	int b;

	a = 0;
	while(!(str[a] <= '9' && str[a] >= '0'))
		a++;
	b = 0;
	while(str[a] <= '9' && str[a] >= '0')
	{
		if(str[a-1] == '-')
		{
			str[b] = str[a - 1];
			b++;
		}
		str[b] = str[a];
		a++;
		b++;
	}
	str[b] = '\0';
	printf("str = %s", str);
	return (str);
}

int		ft_atoi(char *str)
{
	int neg;
	int count;
	int down;
	
	count = 0;
	neg = 1;
	if (str[count] == '-')
		neg = -1;
	count = (ft_strlen(str) - 1);
	while(str[count] != '\0' || str[count] )
	{
		
		count--;
	}
	return(count);
}

int		main()
{
	char nb[300] = "   334234";
	
	ft_atoi(nb);
}
