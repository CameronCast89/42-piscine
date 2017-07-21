/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:11:48 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/11 22:13:36 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char **str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char*, char*))
{
	int		pos;
	int		sorted;
	int		last;
	char	*temp;

	last = ft_strlen(tab) - 1;
	sorted = 0;
	while (sorted != 1)
	{
		pos = 0;
		sorted = 1;
		while (pos < last)
		{
			if (cmp(tab[pos], tab[pos + 1]) > 0)
			{
				temp = tab[pos];
				tab[pos] = tab[pos + 1];
				tab[pos + 1] = temp;
			}
			sorted = 0;
			pos++;
		}
		last--;
	}
}
