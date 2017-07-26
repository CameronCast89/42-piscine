/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div-mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 20:08:47 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/29 20:37:43 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_printchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	ft_printchar(*div + '0');
	ft_printchar(*mod + '0');
}

int		main(void)
{
	int num;

	int num2;

	int div;

	int mod;

	num = 10;
	num2 = 3;
	ft_div_mod(num, num2, &div, &mod);
	return (0);
}
