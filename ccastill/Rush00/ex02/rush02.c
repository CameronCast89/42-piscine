/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 22:31:45 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/02 22:32:18 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush(int x, int y)
{
    //first line                                                                                                                                              
   if(y > 0)
    {
        if(x > 0)
            ft_putchar('A');
        int j = 1;
        while(j < x-1)
        {
            ft_putchar('B');
            j++;
        }
        if(x > 1)
            ft_putchar('A');
        ft_putchar('\n');
    }
    int i = 1;
    while(i < y - 1)
    {
        if(x > 0)
            ft_putchar('B');
        int j = 1;
        while(j < x-1)
        {
            ft_putchar(' ');
            j++;
        }
        if(x > 1)
            ft_putchar('B');
        ft_putchar('\n');
        i++;
    }
    if(y > 1)
    {
        if(x > 0)
            ft_putchar('C');
        int j = 1;
        while(j < x-1)
        {
            ft_putchar('B');
            j++;
        }
        if(x > 1)
            ft_putchar('C');
        ft_putchar('\n');
    }

}
