/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:26:15 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/06 22:37:28 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		pos;
	int		*new;

	pos = 0;
	if (min < max)
	{
		new = (int*)malloc((max - min) + 1);
		while (min < max)
		{
			new[pos] = min;
			min++;
			pos++;
		}
		return (new);
	}
	return (NULL);
}
