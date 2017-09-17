/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 10:51:56 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/15 11:15:41 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);
void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int a;
	int b;

	a = 0;
	while (tab[a])
	{
		b = 0;
		while (tab[a][b])
		{
			ft_putchar(tab[a][b]);
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}
