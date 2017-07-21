/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:08:34 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/14 15:33:45 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*apply)(void *))
{
	if (root)
	{
		btree_apply_infix(root->left, apply);
		apply(root->item);
		btree_apply_infix(root->right, apply);
	}
}
