/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 08:27:49 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/29 13:45:14 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 1;
	b = 0;
	while (b <= 98)
	{
		while (a <= 99)
		{
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			ft_putchar(' ');
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			a++;
			if (b != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		b++;
		a = b + 1;
	}
}
