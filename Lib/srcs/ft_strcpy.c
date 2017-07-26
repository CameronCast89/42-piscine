/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 23:19:45 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/04 10:21:11 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *str)
{
	int		str_num;

	str_num = 0;
	while (str[str_num] != '\0')
	{
		dest[str_num] = str[str_num];
		str_num++;
	}
	while (dest[str_num] != '\0')
	{
		dest[str_num] = 0;
		str_num++;
	}
	return (dest);
}
