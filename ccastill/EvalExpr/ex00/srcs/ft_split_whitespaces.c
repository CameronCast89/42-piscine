/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 09:41:23 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/16 14:36:51 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		num_letters(char *str)
{
	int		count;

	count = 0;
	if (*str == '\0' || *str == ' ' || *str == '\t' || *str == '\n')
		return (count);
	else if (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
		count++;
	return (count + num_letters(str + 1));
}

char	*ft_split_whitespaces(char *str)
{
	char	*array;
	int		pos;
	int		let;

	let = num_letters(str);
	array = (char*)malloc(sizeof(char) * (let + 1));
	array[let + 1] = 0;
	pos = 0;
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
		{
			array[pos] = *str;
			str++;
			pos++;
		}
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
	}
	return (array);
}
