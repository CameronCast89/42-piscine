/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 21:13:25 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/30 22:00:47 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	<stdio.h>

int 	ft_iterative_power(int nb, int power)
{
	int 	final;
	int 	pow;
	
	final = 1;
	pow = power;

	if (pow >= 0)
	{
		while (pow > 0)
		{
			final = final * nb;
			pow--;
		}
		printf("%d", final);
		return final;
	}
	return (0);
}

int 	main(void)
{
	ft_iterative_power(5, 0);
	return (0);
}
