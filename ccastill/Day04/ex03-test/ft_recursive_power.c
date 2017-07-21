/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 22:10:40 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/02 15:59:53 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_recursive_power(int nb, int power)
{
	int 	final;
	int 	pow;
	
	pow = power;
	final = 1;

	if ( pow == 1)
		return nb;
	else if (pow == 0)
		return 1;
	else
	{
		final = nb * ft_recursive_power(nb, pow - 1);
		return final;
	}

	return (0);
}

int 	main(void)
{
	printf("%d", ft_recursive_power(2,6));
	printf("%d", ft_recursive_power(3,7));
	printf("%d", ft_recursive_power(8,8));
	printf("%d", ft_recursive_power(--6,9));
	printf("%d", ft_recursive_power(--2,10));
	printf("%d", ft_recursive_power(+-6,9));
	printf("%d", ft_recursive_power(+-2,10));
	return (0);
}
