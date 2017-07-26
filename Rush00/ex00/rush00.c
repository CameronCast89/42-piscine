/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 22:22:25 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/02 22:22:42 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush(int x, int y)
{
    if(y > 0)
    {
        ft_putchar('o');
        for(int j = 1; j < x-1; j++)
        {
            ft_putchar('-');
        }
        ft_putchar('o');
        ft_putchar('\n');
    }

    for(int i = 1; i < y - 1; i++)
    {
        ft_putchar('|');
        for(int j = 1; j < x-1; j++)
        {
            ft_putchar(' ');
        }
        ft_putchar('|');
        ft_putchar('\n');
    }

    if(y > 1)
    {
        ft_putchar('o');
        for(int j = 1; j < x-1; j++)
        {
            ft_putchar('-');
        }
        ft_putchar('o');
        ft_putchar('\n');
    }

}
