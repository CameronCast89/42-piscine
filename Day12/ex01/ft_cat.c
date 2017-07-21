/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:20:18 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/14 11:22:59 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "includes/ft.h"
#include <errno.h>
#define BUF_SIZE 10

void	ft_print(int fd)
{
	int		rd;
	char	buf[BUF_SIZE + 1];

	rd = 1;
	while (rd)
	{
		rd = read(fd, buf, BUF_SIZE);
		buf[rd] = '\0';
		ft_putstr(buf);
	}
	if (fd != 0)
		close(fd);
}

void	ft_print_error(char *binary, char *name, int error)
{
	ft_putstr(binary);
	ft_putstr(": ");
	ft_putstr(name);
	if (error == 2)
		ft_putstr(": No such file or directory\n");
	else if (error == 13)
		ft_putstr(": Permission denied\n");
	else
		ft_putstr(": Is a directory\n");
}

int		main(int argc, char **argv)
{
	int		fd;
	int		i;

	i = 1;
	if (argc == 1)
		ft_print(0);
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			ft_print(0);
		if (open(argv[i], O_DIRECTORY) != -1)
			ft_print_error(argv[0], argv[i], 0);
		fd = open(argv[i], O_RDONLY);
		if (fd == -1 && (argv[i][0] != '-' && argv[i][1] != '\0'))
			ft_print_error(argv[0], argv[i], errno);
		else if (open(argv[i], O_DIRECTORY) == -1
				 && (argv[i][0] != '-' && argv[i][1] != '\0'))
				ft_print(fd);
		close(fd);
		i++;
	}
	return (0);
}
