/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:58:25 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/06 22:39:22 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src, int check_last)
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
	if (check_last == 0)
	{
		dest[dest_pos + src_pos] = '\n';
		dest[dest_pos + src_pos + 1] = '\0';
	}
	else
		dest[dest_pos + src_pos] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	int		pos;
	int		sub_pos;
	char	*new;

	pos = 1;
	size = 0;
	while (pos < argc)
		size += ft_strlen(argv[pos++]);
	new = (char*)malloc(size + 1);
	sub_pos = 1;
	while (sub_pos < argc)
	{
		if (sub_pos == argc - 1)
			ft_strcat(new, argv[sub_pos++], 1);
		else
			ft_strcat(new, argv[sub_pos++], 0);
	}
	return (new);
}
