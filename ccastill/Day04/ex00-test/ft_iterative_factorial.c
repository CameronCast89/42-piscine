/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 15:46:04 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/30 16:11:19 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int 	ft_printchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_iterative_factorial(int nb)
{
	int 	n;
	int 	final;

	final = nb;	
	while ( nb > 1)
	{
		nb--;
		if (nb == 1)
		{
			printf("%d", final);
			return final;
		}
		final *= nb;
	}
	return (0);
}

int 	main(void)
{
	ft_iterative_factorial(5);
	return (0);
}
