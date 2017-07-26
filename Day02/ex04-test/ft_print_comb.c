/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 19:49:53 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/29 13:43:24 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int digit;

	digit = 012;
	while (digit <= 789)
	{
		if ((digit / 100 < digit / 10 % 10) && (digit / 10 % 10 < digit % 10))
		{
			ft_putchar(digit / 100 + 48);
			ft_putchar((digit / 10) % 10 + 48);
			ft_putchar(digit % 10 + 48);
			if (digit != 789)
				ft_putchar(',');
			ft_putchar(' ');
		}
		digit++;
	}
}
