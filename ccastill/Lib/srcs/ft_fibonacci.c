/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 22:33:13 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/01 20:22:38 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int		final;

	final = 1;
	if (index > 0)
	{
		if (index == 1)
			return (1);
		else
		{
			final = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
			return (final);
		}
	}
	else if (index < 0)
		return (-1);
	else
		return (0);
}
