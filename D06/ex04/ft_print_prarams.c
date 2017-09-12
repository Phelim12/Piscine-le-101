/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 20:50:43 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/12 21:40:05 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] || s2[a])
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (s1[a] - s2[a]);
}

void	ft_sort_integer_table(char **tab, int argc)
{
	int swap;
	int a;

	a = 1;
	while (a < argc)
	{
		if (ft_strcmp(tab[a], tab[a + 1]))
		{
			printf("tab  == %s", tab[a]);
		}
		a++;
	}
}


int		main(int argc, char *argv[])
{
	int a;

	a = 1;
	ft_sort_integer_table(argv, argc);
	while (argv[a])
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
