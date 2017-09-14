/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 10:54:35 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/14 10:56:47 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
