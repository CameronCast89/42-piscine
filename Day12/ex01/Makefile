#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 11:44:16 by ccastill          #+#    #+#              #
#    Updated: 2017/07/13 21:51:55 by ccastill         ###   ########.fr        #
#                                                                              #
#******************************************************************************#


NAME =  ft_cat
FILES = ft_cat.c srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_strlen.c
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