/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 16:16:00 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/08 16:18:02 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_putchar(char c);

void 	ft_printtab(int a, int b, int c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	if (a != 7)
	{
			ft_putchar(',');
			ft_putchar(' ');
	}
}

void 	ft_print_comb()
{
	int tab[3];

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	while(tab[0] != 7)
	{
		if (tab[2] > 9)
		{
			tab[1]++;
			if (tab[1] > 8)
			{
				tab[0]++;
				tab[1] = tab[0] + 1;
			}
			tab[2] = tab[1] + 1;
		}
		ft_printtab(tab[0], tab[1], tab[2]);
		tab[2]++;
	}
}

int main(int argc, char const *argv[])
{
	ft_print_comb();
	return 0;
}
