/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 20:59:39 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/12 21:05:33 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char	swap;
	int		size;
	int		a;

	a = 0;
	size = ft_strlen(str);
	while (a < size / 2)
	{
		swap = str[size - (a + 1)];
		str[size - (a + 1)] = str[a];
		str[a] = swap;
		a++;
	}
	return (str);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int a;

	a = 1;
	while (argv[a])
	{
		ft_strrev(argv[a]);
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}

