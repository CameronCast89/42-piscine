/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 22:39:16 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/02 22:39:27 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rush(int x, int y)
{
    //first line                                                                                                                                                        
    if(y > 0)
    {
        if(x > 0)
            ft_putchar('A');    // if there is width > 0 and height > 0, print the top left character                                                                   
        int j = 1;              // the second character in the x direction less than the top right corner                                                               
        while(j < x-1)          // print all the way until right before the top right corner                                                                            
        {
            ft_putchar('B');
            j++;
        }
        if(x > 1)               // if there is a width of at least two, there's a top right corner                                                                      
            ft_putchar('C');    // print it out                                                                                                                         
        ft_putchar('\n');
    }

    // lines in the middle if the rectangle is big enough                                                                                                               
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

    // last line, same logic as first line                                                                                                                              
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
            ft_putchar('A');
        ft_putchar('\n');
    }

}
