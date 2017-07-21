/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 12:48:16 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/30 14:28:01 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_printchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_sort_integer_table(int *tab, int size)
{
	int 	a;
	int 	b;
	int 	temp;

	a = 0;
	b = 0;
	temp = 0;

	while (a < size)
		{
			b = a + 1;
			while (b < size)
			{
				if (*(tab + a) > *(tab + b))
				{
					temp = *(tab + a);
					*(tab + a) = *(tab + b);
					*(tab + b) = temp;
				}
				b++;
			}
			a++;
		}
}

int 	main(void)
{
	int 	tab[5];
	
	tab[0] = 9;
	tab[1] = 7;
	tab[2] = 5;
	tab[3] = 3;
	tab[4] = 1;

	ft_sort_integer_table(tab, 5);

	int n;
	n = 0;
	while ( n < 5)
	{
		ft_printchar(tab[n] + '0');
		n++;
	}
	return (0);
}
