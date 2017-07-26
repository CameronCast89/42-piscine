/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 11:06:23 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/30 12:44:36 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_printchar(char c)
{
	write(1, &c, 1);
	return (0);
}

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
	printf("%d", temp);
	return (temp);
}

int		main(void)
{
	char	number[] = "1234";

	ft_atoi(number);
	return (0);
}
