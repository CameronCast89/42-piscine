/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:49:53 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/07 16:14:53 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int 	a;
	int 	b;

	a = 0;
	b = 0;
	while (factory[a] != '\0')
	{
		while (factory[a][b] != '\0')
		{
			free(factory[a][b]);
			b++
		}
		a++;
	}
}
