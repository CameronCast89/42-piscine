/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 17:59:41 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/12 23:40:06 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void			ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*temp;

	temp = ft_create_elem(data);
	if (*begin_list)
	{
		temp->next = *begin_list;
		*begin_list = temp;
	}
	else
		*begin_list = ft_create_elem(data);
}

t_list			*ft_list_push_params(int ac, char **av)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = 0;
	while (i < ac)
	{
		ft_list_push_front(&temp, av[i]);
		i++;
	}
	return (temp);
}
