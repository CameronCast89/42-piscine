/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_next_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 23:35:48 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/01 20:32:52 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		num;

	num = 2;
	if (nb < 2)
		return (ft_find_next_prime(nb + 1));
	else if (nb == 2)
		return (nb);
	while (num <= nb / 2 + 1)
	{
		if (nb % num == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		else if (num == nb / 2 + 1)
			return (nb);
		num++;
	}
	return (0);
}
