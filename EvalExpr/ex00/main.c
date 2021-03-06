/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:26:59 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/17 16:34:51 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int		grab_atom(char **expr)
{
	int atom;

	while (*(*expr) == '(')
	{
		(*expr)++;
		return (calc_summands(expr));
	}
	atom = ft_atoi((*expr));
	(*expr)++;
	while (*(*expr) >= '0' && *(*expr) <= '9')
		(*expr)++;
	return (atom);
}

int		calc_factors(char **expr)
{
	int		num1;
	int		num2;
	char	oper;

	num1 = grab_atom(expr);
	while ((*expr))
	{
		oper = *(*expr);
		if (oper != '/' && oper != '*' && oper != '%')
			return (num1);
		(*expr)++;
		num2 = grab_atom(expr);
		if (oper == '/')
			num1 = num1 / num2;
		else if (oper == '%')
			num1 = num1 % num2;
		else
			num1 = num1 * num2;
	}
	return (0);
}

int		calc_summands(char **expr)
{
	int		num1;
	int		num2;
	char	oper;

	num1 = calc_factors(expr);
	while ((*expr))
	{
		oper = *(*expr);
		if (oper == ')')
		{
			(*expr)++;
			return (num1);
		}
		if (oper != '-' && oper != '+')
			return (num1);
		(*expr)++;
		if (oper == ')')
			num2 = calc_factors(expr);
		else
			num2 = calc_factors(expr);
		num1 = (oper == '-' ? num1 - num2 : num1 + num2);
	}
	return (0);
}

int		eval_expr(char *str)
{
	char	*remove;
	int		result;

	remove = ft_split_whitespaces(str);
	result = calc_summands(&remove);
	return (result);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
