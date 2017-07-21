/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 16:24:04 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/06 22:52:54 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		s_pos;

	s_pos = 0;
	new = (char*)malloc(sizeof(src));
	while (src[s_pos] != '\0')
	{
		new[s_pos] = src[s_pos];
		s_pos++;
	}
	return (new);
}
