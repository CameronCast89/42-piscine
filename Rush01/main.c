/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvelez <rvelez@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:19:40 by rvelez            #+#    #+#             */
/*   Updated: 2017/07/08 21:17:35 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printboard(int **array)
{
	int		row;
	int		col;

	row = 0;
	col = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putchar(array[row][col]);
			if (col < 8)
				ft_putchar(' ');	
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int 	ft_placement(int **array, int row, int column,  int num)
{
	int 	check_col;
	int 	check_row;

	check_col = 0;
	check_row = 0;
	while (check_col < 9)
	{
		if (array[row][check_col] == num)
				return (0);
		check_col++;
	}
	while (check_row < 9)
	{
		if (array[check_row][col] == num)
			return (0);
		check_row++;
	}
	return (1);
}

int 	value_of_board (int **array)
{
	int 	total;
	int		row;
	int		col;

	row = 0;
	col = 0;
	total = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			total  = total + array[row][col];
			col++;
		}
		row++;
	}
	return (total);
}

int** 	ft_convert_to_int(char **str)
{
  int 	**array;
  int 	row;
  int 	col;
  int	i;

  i = 0;
  row = 1;
  col = 0;
  array = (int**)malloc(sizeof(int*) * 9);
  while (i < 9)
  {
	  array[i] = (int*)malloc(sizeof(int) * 9);
	  i++;
	}
	while (str[row] != '\0')
  {
	  while (str[row][col] != '\0')
	  {
		  if (str[row][col] == '.')
			  array[row - 1][col] = 0;
		  else
			array[row - 1][col] = str[row][col] - 48;
		col++;
	  }
	  row++;
  }
  return (array);
}

void 	free_memory(int **array)
{
	int		row;
	int 	col;

	row = 0;
	col = 0;
	while (row < 9)
    {
        col = 0;
        while (col < 9)
        {
            free(array[row][col]);
            col++;
        }
		free(array[row]);
        row++;
    }
}

int     sudoku(int **array)
{
	int		row;
	int 	col;

	row = 0;
	col = 0;
	if (value_of_board(array) == 405)
	{
		ft_print_board(array);
		free_memory(array);	
	}
	while (row < 9)
    {
        col = 0;
		while (col < 9)
		{
			if (ft_placement(array, row, col, array[row][col]) == 0)
				col++;
			else
				
        }
        row++;
    }
}

int main(int argc, char **argv)
{
	
	return (0);
}
