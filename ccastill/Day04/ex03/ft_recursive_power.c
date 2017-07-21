/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 23:00:48 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/06 23:09:06 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_recursive_power(int nb, int power)
{
    int     final;

    final = 1;
    if (power < 0)
        return (0);
    if (power == 1)
        return (nb);
    if (power == 0)
        return (1);
    else
    {
        final = nb * ft_recursive_power(nb, power - 1);
        if (final > 0)
            return (final);
        else
            return (0);
    }
}

int 	main(void)
{
	printf("%d", ft_recursive_power(--2, 10));
}
