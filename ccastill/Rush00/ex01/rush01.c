/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 22:27:15 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/02 22:27:35 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush(int x, int y)
{
    if(y > 0)
    {
        if(x > 0)
            ft_putchar('/');
        int j = 1;
        while(j < x-1)
        {
            ft_putchar('*');
            j++;
        }
        if(x > 1)
            ft_putchar('\\');
        ft_putchar('\n');
    }

    int i = 1;
    while(i < y - 1)
    {
        if(x > 0)
            ft_putchar('*');
        int j = 1;
        while(j < x-1)
        {
            ft_putchar(' ');
            j++;
        }
        if(x > 1)
            ft_putchar('*');
        ft_putchar('\n');
        i++;
    }

    if(y > 1)
    {
        if(x > 0)
            ft_putchar('\\');
        int j = 1;
        while(j < x-1)
        {
            ft_putchar('*');
            j++;
        }
        if(x > 1)
            ft_putchar('/');
        ft_putchar('\n');
    }
