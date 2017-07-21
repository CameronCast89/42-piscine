/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 11:43:30 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/11 15:24:55 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_atoi(char *str);
int		ft_putchar(char c);
int		ft_fibonacci(int index);
int		ft_find_next_prime(int nb);
void	ft_putnbr(int nb);
int		ft_is_prime(int nb);
int		ft_iterative_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_sort_integer_table(int *tab, int size);
int		ft_sqrt(int nb);
int		ft_str_is_alpha(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_uppercase(char *str);
char	*ft_strcapitalize(char *str);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *str);
int		ft_strlen(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strncat(char *dest, char *src, int nb);
char	*ft_strupcase(char *str);
void	ft_swap(int *a, int *b);
void	ft_ultimate_div_mod(int *a, int *b);
#endif
