/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 21:29:55 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/04 23:25:51 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		dest_pos;
	int		src_pos;

	dest_pos = 0;
	src_pos = 0;
	while (dest[dest_pos] != '\0')
		dest_pos++;
	while (src[src_pos] != '\0')
	{
		dest[dest_pos + src_pos] = src[src_pos];
		src_pos++;
	}
	dest[dest_pos + src_pos] = '\0';
	return (dest);
}
