/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 21:52:01 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/06 22:22:14 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;
	int		key;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] > 32 && str[i] < 127)
		{
			key = str[i];
			key += 42;
			if (key > 126)
				key -= 94;
			str[i] = key;
		}
		i++;
	}
	return (str);
}