/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 10:25:01 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/04 22:55:00 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int		pos;
	unsigned int		end_of_str;

	pos = 0;
	while (str[pos] != '\0')
	{
		pos++;
		if (str[pos] == '\0')
			end_of_str = pos;
	}
	pos = 0;
	while (pos < n)
	{
		if (str[pos] == '\0')
			end_of_str = pos;
		else if (pos >= end_of_str)
			dest[pos] = 0;
		else
			dest[pos] = str[pos];
		pos++;
	}
	return (dest);
}
