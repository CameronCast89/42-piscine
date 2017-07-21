/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:32:01 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/04 20:41:37 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 48 && str[pos] <= 57)
			pos++;
		else
			return (0);
	}
	return (1);
}