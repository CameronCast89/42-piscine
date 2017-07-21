/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:52:29 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/12 23:02:42 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*temp;
	unsigned int		i;

	temp = begin_list;
	i = 0;
	if (temp == 0)
		return (0);
	while (i < nbr)
	{
		if (temp->next == 0)
			return (0);
		temp = temp->next;
		i++;
	}
	return (temp);
}
