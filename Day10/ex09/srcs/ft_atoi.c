/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 15:54:32 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/04 22:37:03 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		loop(int pos, int if_neg, char *str)
{
	int		temp_num;
	int		final;

	temp_num = 1;
	final = 0;
	while (str[pos] != '\0' && 47 < str[pos] && str[pos] < 58)
	{
		temp_num = str[pos] - '0';
		if (final == 214748364 && temp_num == 8)
			return (-2147483648);
		final *= 10;
		final += temp_num;
		pos++;
	}
	if (final > 0)
		return (final * if_neg);
	return (0);
}

int		ft_atoi(char *str)
{
	int		pos;
	int		if_neg;

	pos = 0;
	if_neg = 1;
	while (str[pos] > 0 && str[pos] < 33)
		pos++;
	if ((str[pos] > 32 && str[pos] < 48) || str[pos] > 57)
	{
		if ((str[pos] > 64 && str[pos] < 91) ||
			(str[pos] > 96 && str[pos] < 123))
			return (0);
		else if (str[pos] == '+')
			return (loop(++pos, if_neg, str));
		else if (str[pos] == '-')
		{
			if_neg = -1;
			return (loop(++pos, if_neg, str));
		}
		return (0);
	}
	else
		return (loop(pos, if_neg, str));
	return (0);
}
