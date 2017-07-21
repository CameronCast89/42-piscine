/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 20:42:20 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/11 21:54:06 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		pos;

	pos = 0;
	while (s1[pos] != '\0' || s2[pos] != '\0')
	{
		if (s1[pos] != s2[pos])
			return (s1[pos] - s2[pos]);
		pos++;
	}
	return (0);
}

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

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[pos], tab[pos + 1]) > 0)
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
