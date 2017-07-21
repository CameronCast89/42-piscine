/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:17:05 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/07 16:28:43 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int	new_base;

	new_base = base;
	if (new_base % 2 == 0)
		new_base = new_base / 2;
	else
		new_base = (new_base * 3) + 1;
	return (ft_collatz_conjecture(new_base));
}
