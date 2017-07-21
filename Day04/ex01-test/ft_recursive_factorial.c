/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 16:25:34 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/30 21:10:00 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_recursive_factorial(int nb)
{
	int 	final;
	
	final = 0;
	if (nb == 1)
	{
		return 1;
	}
	else
	{
		final = final + nb * ft_recursive_factorial(nb - 1);
		return final;
	}

	return (0);
}

int 	main(void)
{
	printf("%d", ft_recursive_factorial(3));
	return (0);
}
