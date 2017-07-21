/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 11:54:24 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/13 19:36:04 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "includes/ft.h"
#define BUF_SIZE 10

int		main(int argc, char **argv)
{
	int		fd;
	int		rd;
	char	buf[BUF_SIZE + 1];

	rd = 1;
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(2, "File name missing.\n", 19);
			return (1);
		}
		while (rd)
		{
			rd = read(fd, buf, BUF_SIZE);
			buf[rd] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
	else
		write(2, "File name missing.\n", 19);
	return (0);
}
