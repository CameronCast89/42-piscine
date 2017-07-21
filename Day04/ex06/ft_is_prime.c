/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 23:35:48 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/01 20:27:14 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		num;

	num = 2;
	if (nb > 1)
	{
		while (num <= nb / 2)
		{
			if (nb % num == 0)
				return (0);
			num++;
		}
		return (1);
	}
	return (0);
}
