/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 11:43:30 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/16 23:26:28 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>

int		ft_atoi(char *str);

int		ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

char	*ft_split_whitespaces(char *str);

int		sub_set(char **expr);

int		grab_atom(char **expr);

int		calc_factors(char **expr);

int		calc_summands(char **expr);

#endif
