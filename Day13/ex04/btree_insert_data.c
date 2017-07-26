/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 22:36:06 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/14 23:38:36 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf) (void *, void *))
{
	if (root == 0)
		btree_create_node(item);
	if (cmpf(item, root->item) >= 0)
	{
		root = root->right;
		btree_insert_data(root, item, cmpf);
	}
	else if (cmpf(item, root->item) < 0)
	{
		root = root->left;
		btree_insert_data(root, item, cmpf); 
	}
}

void print(void *str)
{
	printf("%s ", str);
}

int main()
{
	t_btree *head;
	// 00 - 03
	void  (*pr)(void*);
	pr = &print;
	head = btree_create_node("1");
	head->left = btree_create_node("2");
	head->right = btree_create_node("3");
	head->left->left = btree_create_node("4");
	head->left->right = btree_create_node("5");
	head->right->left = btree_create_node("6");
	head->right->right = btree_create_node("7");
	btree_insert_data(&head, 8, strcmp);
	btree_apply_infix(head, pr);
	printf("\n");
	return (0);
}
