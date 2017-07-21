/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparetxt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 21:27:41 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/15 23:44:20 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define AR_SIZE 10

int		comparetxt(int source, int file_name)
{
	char 	buf_1[AR_SIZE + 1];
	char 	buf_2[AR_SIZE + 1];
	int 	rd;
	int 	fn;

	sr = 1;
	fn = 1;
	while (rd || fn)
	{
		sr = read(SOURCE, buf_1, AR_SIZE);
		buf_1[sr] = '\0'
		fn = read(file_name, buf_2, AR_SIZE);
		buf_2[fn] = '\0';
		if (strcmp(buf_1, buf_2) != 0)
			return (0);
	}
	close(file_name);
	open(file_name, O_RDONLY | O_TRUNC);
	return (1);
}


void	open_files(void)
{
	int source;
	int rush;	
	
	source = open("source.txt", O_RDONLY |  O_TRUNC);
	rush = open("text.txt",O_RDONLY);
	comparetxt(source, rush);

	close(SOURCE);
}
