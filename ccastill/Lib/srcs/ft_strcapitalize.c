/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:23:56 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/04 23:06:16 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		pos;
	char	a;
	char	b;

	pos = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[pos] != '\0')
	{
		a = str[pos];
		b = str[pos - 1];
		if (a >= 'A' && a <= 'Z')
		{
			if ((b >= 48 && b <= 57) || (b >= 'a' && b <= 'z')
				|| (b >= 'A' && b <= 'Z'))
				a += 32;
		}
		else if (a >= 'a' && a <= 'z')
			if ((b > 0 && b < 48) || (b > 57 && b < 65) || (b > 90 && b < 97)
				|| (b > 122))
				a -= 32;
		str[pos] = a;
		pos++;
	}
	return (str);
}
