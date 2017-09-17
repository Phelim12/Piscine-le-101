/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcreuso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 11:27:37 by clcreuso          #+#    #+#             */
/*   Updated: 2017/09/15 11:33:23 by clcreuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *s1)
{
	int a;

	a = 0;
	while (s1[a])
		a++;
	return (a);
}

char	*ft_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (src);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	dest = ft_strcpy(dest, src);
	return (dest);
}
