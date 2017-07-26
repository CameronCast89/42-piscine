/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:44:10 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/06 19:55:30 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		h;

	h = hour;
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	if (hour > 12 && hour < 24)
		h = hour % 12;
	else if (hour == 24)
		h = 0;
	if (h == 0)
		printf(" 12.00 A.M. AND 1.00 A.M.\n");
	else if (hour > 12 && hour < 24)
		printf(" %d.00 P.M. AND %d.00 P.M.\n", h, h + 1);
	else if (hour < 12 & hour != 11)
		printf(" %d.00 A.M. AND %d.00 A.M.\n", h, h + 1);
	else if (hour == 12)
		printf(" %d.00 P.M. AND 1.00 P.M.\n", hour);
	else if (hour == 11)
		printf(" %d.00 A.M. AND 12.00 P.M.\n", hour);
}
