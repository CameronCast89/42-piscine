/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:17:06 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/04 23:20:54 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		pos;

	pos = 0;
	if (s1[pos] == '\0' || s2[pos] == '\0')
		return (s1[pos] - s2[pos]);
	while (s1[pos] != '\0' && s2[pos] != '\0')
	{
		if (s1[pos] != s2[pos])
			return (s1[pos] - s2[pos]);
		else
			pos++;
	}
	return (0);
}