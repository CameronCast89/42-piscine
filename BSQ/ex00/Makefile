#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/17 14:47:17 by ccastill          #+#    #+#              #
#    Updated: 2017/07/17 14:49:08 by ccastill         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =  bsq
FILES = main.c srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_strlen.c
HEADERS = includes
all: $(NAME) | SILENT
SILENT:
	@
$(NAME):
	-@gcc -Wall -Werror -Wextra -o $(NAME) $(FILES) -I$(HEADERS)
clean:
	-@rm -f
fclean: clean
	-@rm -f $(NAME)
re: fclean all