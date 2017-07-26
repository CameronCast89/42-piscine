/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:39:27 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/07 14:51:27 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		a;
	int		b;
	int		temp;

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

int		ft_button(int i, int j, int k)
{
	int		array[3];

	array[0] = i;
	array[1] = j;
	array[2] = k;
	ft_sort_integer_table(array, 3);
	return (array[1]);
}
