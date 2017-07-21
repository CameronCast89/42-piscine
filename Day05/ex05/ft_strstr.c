/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 11:41:15 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/04 23:02:51 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		s_pos;
	int		f_pos;
	char	*final;

	final = 0;
	f_pos = 0;
	s_pos = 0;
	while (str[s_pos] != '\0')
	{
		if (to_find[f_pos] == '\0')
			return (str);
		final = (str + s_pos);
		while (to_find[f_pos] != '\0' && str[s_pos + f_pos] == to_find[f_pos])
		{
			f_pos++;
			if (to_find[f_pos] == '\0')
				return (final);
		}
		s_pos++;
		final = 0;
	}
	return (final);
}
