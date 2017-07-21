/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:26:59 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/11 23:18:37 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/math.h"

typedef struct {
	char oper;
	void *funct;

}t_opp;

void	do_math(int one, int two, void (*f) (int, int))
{
	f(one, two);
}

void	operation(int one, int two, char oper)
{
	int		i;
	int		match_found;
	char	*input;
	void	*funct[5];

	i = 0;
	match_found = 0;
	while (t_opp != '\0')
	{
		if (oper == t_opp)
		{
			do_math(one, two, funct[i]);
			ft_putchar('\n');
			match_found = 1;
		}
		i++;
	}
// display error message
}

int		main(int argc, char **argv)
{
	int		p_one;
	int		p_two;
	int		i;
	char	oper;

	i = 1;
	if (argc == 4)
	{
		if (argv[2][0] != '\0' && argv[2][1] == '\0')
		{
			p_one = ft_atoi(argv[1]);
			oper = argv[2][0];
			p_two = ft_atoi(argv[3]);
			operation(p_one, p_two, oper);
		}
			// display error message
	}
	return (0);
}
