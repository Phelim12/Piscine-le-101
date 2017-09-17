/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 17:12:26 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/16 11:21:25 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str, int a)
{
	int	i;

	i = 0;
	while (str[i] && a == 0)
		i++;
	if (a == 0)
		return (i);
	while (str[i] == 32)
		i++;
	while (str[i] != 32 && str[i] != '\0')
		i++;
	return (i + 1);
}

char	*ft_make_good_str(char *str)
{
	char	*tab;
	int		a;
	int		b;

	a = 0;
	b = 0;
	tab = malloc((ft_strlen(str, 0) + 1) * sizeof(char));
	while (str[a])
	{
		if (str[a] == '\t' || str[a] == '\n' || str[a] == 32)
		{
			while (str[a] == '\t' || str[a] == '\n' || str[a] == 32)
				a++;
			tab[b] = 32;
			b++;
		}
		tab[b] = str[a];
		a++;
		b++;
	}
	return (tab);
}

int		ft_count_words(char *str)
{
	int	nb_w;
	int	a;

	a = 0;
	nb_w = 0;
	while (str[a])
	{
		if (str[a] == 32)
			nb_w++;
		a++;
	}
	return (nb_w + 1);
}

char	**ft_fill_tab(char *str1, int nb_w, int b, int c)
{
	char	**tab;
	int		a;

	a = 0;
	tab = malloc(sizeof(char*) * (nb_w + 1));
	tab[c] = malloc(sizeof(char) * ft_strlen(str1 + a, 1));
	while (str1[a])
	{
		if (str1[a] != 32 && str1[a] != '\t' && str1[a] != '\n')
			tab[c][b] = str1[a];
		else
		{
			tab[c][b] = '\0';
			b = -1;
			c++;
			tab[c] = malloc(sizeof(char) * ft_strlen(str1 + a, 1));
		}
		b++;
		a++;
	}
	tab[c + 1] = NULL;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	char	*str1;
	int		nb_w;

	str1 = malloc((ft_strlen(str, 0) + 1) * sizeof(char));
	str1 = ft_make_good_str(str);
	nb_w = ft_count_words(str1);
	tab = ft_fill_tab(str1, nb_w, 0, 0);
	return (tab);
}
