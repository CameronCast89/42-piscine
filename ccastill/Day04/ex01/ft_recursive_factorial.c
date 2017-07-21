/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 16:25:34 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/01 22:01:50 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		final;

	final = 0;
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		final = final + nb * ft_recursive_factorial(nb - 1);
		if (final > 0)
			return (final);
		else
			return (0);
	}
}
