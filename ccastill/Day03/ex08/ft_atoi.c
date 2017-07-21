/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 11:06:23 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/30 12:45:58 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		final_number;
	int		temp;
	int		pos;

	pos = 0;
	final_number = 0;
	while (str[pos] != '\0')
	{
		temp = temp + str[pos] - '0';
		temp *= 10;
		pos++;
	}
	return (temp);
}
