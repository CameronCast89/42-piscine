/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:05:53 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/07 15:36:38 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int		i;
	int		final;

	i = -1;
	final = 0;
	while (i++ < length)
		final ^= tab[i];
	return (final);
}
