/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 11:23:46 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/15 11:24:01 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_long_strlen(int argc, char *argv[], int a, int c)
{
	int b;

	while (a < argc)
	{
		b = 0;
		while (argv[a][b])
			b++;
		c += (b + 1);
		a++;
	}
	return (c);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		size;
	int		a;
	int		b;
	int		c;

	a = 0;
	c = 0;
	size = ft_long_strlen(argc, argv, 0, 0);
	str = malloc(sizeof(char) * (size + 1));
	while (a < argc)
	{
		b = 0;
		while (argv[a][b])
		{
			str[c + a] = argv[a][b];
			c++;
			b++;
		}
		str[c + a] = '\n';
		a++;
	}
	str[a + c] = '\0';
	return (str);
}
