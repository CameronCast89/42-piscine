/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 22:38:47 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/02 22:38:56 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
