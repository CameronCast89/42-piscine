/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 18:00:13 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/05 22:13:13 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		pos;

	pos = 0;
	while (s1[pos] != '\0' || s2[pos] != '\0')
	{
		if (s1[pos] != s2[pos])
			return (s1[pos] - s2[pos]);
		pos++;
	}
	return (0);
}

int		sort(int argc, char **argv)
{
	int		pos;
	int		sorted;
	int		last;
	char	*temp;

	last = argc - 1;
	sorted = 0;
	while (sorted != 1)
	{
		pos = 1;
		sorted = 1;
		while (pos < last)
		{
			if (ft_strcmp(argv[pos], argv[pos + 1]) > 0)
			{
				temp = argv[pos];
				argv[pos] = argv[pos + 1];
				argv[pos + 1] = temp;
			}
			sorted = 0;
			pos++;
		}
		last--;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		pos;

	sort(argc, argv);
	pos = 1;
	while (pos < argc)
	{
		ft_putstr(argv[pos]);
		ft_putchar('\n');
		pos++;
	}
	return (0);
}
