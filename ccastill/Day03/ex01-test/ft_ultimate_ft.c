/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 15:13:55 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/29 19:12:13 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
	ft_putchar(*********nbr);
}

int		main(void)
{
	int *ptr;

    int **ptr2;

    int ***ptr3;

    int ****ptr4;

    int *****ptr5;

    int ******ptr6;

    int *******ptr7;

    int ********ptr8;

	int *********PTR9;

	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 =  &ptr7;
	PTR9 = &ptr8;

	ft_ultimate_ft(PTR9);
	return (0);
}
