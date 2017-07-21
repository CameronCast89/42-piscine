/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 20:44:26 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/29 21:08:27 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_printchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int rem;

	div = *a / *b;
	rem = *a % *b;
	*a = div;
	*b = rem;
	ft_printchar(*a + '0');
	ft_printchar(*b + '0');
}

int		main(void)
{
	int num;
	int num2;

	num = 10;
	num2 = 3;
	ft_ultimate_div_mod(&num, &num2);
	return (0);
}
