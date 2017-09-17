/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 17:49:40 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/15 18:53:04 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *cp_dest;
	char *cp_src;
	unsigned int cp_size;
	unsigned int a;

	a = 0;
	cp_src = src;
	cp_dest = dest;
	cp_size = size;
	while (cp_src[a] && cp_size != 0)
	{
		cp_dest[a] = cp_src[a];
		cp_size--;
		a++;
	}
	cp_dest[a] = '\0';
	return (a + cp_size - 1);
}

int main(int argc, char *argv[])
{
	printf("%u\n", ft_strlcpy(argv[1], argv[2], 12));
	printf("%lu\n", strlcpy(argv[1], argv[2], 12));
}
