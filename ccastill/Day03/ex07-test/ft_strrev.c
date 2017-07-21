/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 23:22:00 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/30 10:57:17 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_printchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	*ft_sttrev(char *str)
{
	int		n;
	int		b;
	char	c;
	char	m;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	n--;
	m = 0;
	while (n >= m)
	{
		c = str[m];
		*(str + m) = *(str + n);
		*(str + n) = c;
		n--;
		m++;
	}
	b = 0;
	while (str[b] != '\0')
	{
		ft_printchar(str[b]);
		b++;
	}
	return (str);
}

int		main(void)
{
	char	name[] = "cameron";

	ft_sttrev(name);
	return (0);
}
