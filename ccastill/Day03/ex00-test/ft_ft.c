/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 15:13:55 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/29 18:00:55 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
	ft_putchar(*nbr);
}

int		main(void)
{
	int first_var;

	first_var = 0;
	ft_ft(&first_var);
	return (0);
}
