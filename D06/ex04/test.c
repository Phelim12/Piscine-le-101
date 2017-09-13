/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 18:34:46 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/13 18:57:24 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s1)
{
	int a;

	a = 0;
	while (s1[a])
	{
		ft_putchar(s1[a]);
		a++;
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

void	tri_iteratif(char *tableau[], int taille)
{
	char *temp; 
	int i;
	int j;

	i = 1;
	while (i < taille) 
	{
		j = 1;
		while (j < taille)
		{
			if (ft_strcmp(tableau[i], tableau[j]) < 0)
			{
				temp = tableau[i];
				tableau[i] = tableau[j];
				tableau[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int  main(int argc, char *argv[])
{
	int i;

	tri_iteratif(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
