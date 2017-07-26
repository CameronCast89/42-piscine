/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 10:17:57 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/14 15:28:29 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree	*temp;

	temp = malloc(sizeof(t_btree));
	if (temp)
	{
		temp->item = item;
		temp->left = 0;
		temp->right = 0;
	}
	return (temp);
}
