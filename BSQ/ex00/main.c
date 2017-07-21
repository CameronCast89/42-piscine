#include "includes/ft.h"
void print_array(int **obstacles, int length, int width);

void	convert_to_array(char **argv)
{
	int		fp;
	int		x;
	int		y;
	int 	a;
	int 	b;
	int 	digit_size;
	char	buffer[4096];
	int 	**obstacles;
	int 	sq_size;
	int 	sq_width;
	char 	empty; 
	char	filled;
	char 	filling; 

	a = 0;
	x = 0;
	y = 0;
	b = 0;
	digit_size = 0;
/*****************************************************************************/
/*******************opening file & reading into buffer************************/
/*****************************************************************************/
	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		write(1, "Cannot open file.\n", 19);
	}
	else
	{
		read(fp, buffer, 1);
		while (buffer[x] != '\n')
		{
			x++;
			read(fp, buffer + x, 1);
		}
	}
/********************************printing buffer*****************************/

	while (buffer[digit_size] >= '0' && buffer[digit_size] <= '9')
	{
		sq_size = sq_size * 10;
		sq_size = sq_size + (buffer[digit_size] - '0');
		digit_size++;
	}
	empty = buffer[digit_size];
	filled = buffer[++digit_size];
	filling = buffer[++digit_size];

	sq_width = 0;

	read(fp, buffer, 1);	
	while (buffer[sq_width] != '\n')
	{
		a++;
		read(fp, buffer + a, 1); 
		sq_width++;
	}
	
	printf("wdith of array is: %d ", sq_width);
	printf("\nsize of square is %d \n", sq_size);
	printf("\nempty char is: %c \n", empty);
	printf("\nfilled char is: %c \n", filled);
	printf("\nfilling char is: %c \n", filling);
/*****************************************************************************/
/*******************************setting **obstacles with 0********************/
	int c = 0; 
	int t = 0;


	obstacles = (int**)malloc(sizeof(int*)*sq_size);

	for(int i = 0; i< sq_size; i++)
	{
		obstacles[i] = (int*)malloc(sizeof(int)*sq_width);
	}
	while (c < sq_size)
	{
		t = 0;
		while (t < sq_width){

			obstacles[c][t] = 0;
			t++;
		}
		c++;
	}

	printf("\n printing obstacles \n");
	print_array(obstacles, sq_size, sq_width);
	printf("\n --printed--");
/*****************************************************************************/
/****************************updating obstacles with int values***************/
	int max; 
	max = 0;
	int i;
	int rd;
	rd  = 0;
	i = 0;
	y = 0; 
	a = 0;
	printf("%s", buffer);
	while (a < sq_size)
	{
		while (y < sq_width)
		{
//			if (a > 0 && y > 0){
//				obstacles[a][y] = (obstacles[a][y-1] + obstacles[a-1][y]) - obstacles[a-1][y-1];
//			}
			if (buffer[y] == filled) 
			{
				printf("o found at %d, %d\n", a, y);
				obstacles[a][y] = obstacles[a][y] + 1;
			}
			y++;
		}
		read(fp, buffer, sq_width);
		rd = 0;
		y = 0;
		a++;
	}

	printf("\n\n");
	print_array(obstacles, sq_size, sq_width);
	close(fp);
}

int		main(int argc, char **argv)
{
	int x; 
	x = 0;
	if (argc == 1)
	{
		write(1, "File name missing.\n", 18);
		return (0);
	}
	else
	{
	//while(x < argc) //account for more than 1 file
		convert_to_array(argv);
	}
	return (0);
}
void print_array(int **obstacles, int length, int width){
	int c;
	int t;


	c = 0;
	t = 0;
	while (c < length){
		while (t < width){

			printf("%d ", obstacles[c][t]);
			t++;
		}
		printf("\n");
		t = 0;
		c++;

	}
}
