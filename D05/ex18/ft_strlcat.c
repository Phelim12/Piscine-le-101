/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 18:37:48 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/12 19:55:06 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b] || nb)
	{
		dest[b + a] = src[b];
		b++;
		nb--;
	}
	dest[a + b] = '\0';
	return (dest);
}
