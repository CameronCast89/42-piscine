/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 23:05:08 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/30 23:33:05 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_sqrt(int nb)
{
	int 	num;

	num = 1;
	while ( num <= nb / 2 && num > 0) 
	{
		if ( nb == num * num)
		{
			return num;
		}
		num++;
	}
	return (0);
}

int 	main(void)
{
	printf("%d", ft_sqrt(-5));
	return (0);
}
