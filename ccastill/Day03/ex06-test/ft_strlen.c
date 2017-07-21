/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 22:10:00 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/29 22:32:17 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_printchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	ft_printchar(count + '0');
	return (count);
}

int		main(void)
{
	char	*example;

	example = "cameron";
	ft_strlen(example);
	return (0);
}
