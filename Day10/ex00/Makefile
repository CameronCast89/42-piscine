#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 15:52:21 by ccastill          #+#    #+#              #
#    Updated: 2017/07/11 09:28:13 by ccastill         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
HEADER = includes
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
INCLUDE_O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)
$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC) -I$(HEADER) && \
	ar rc $(NAME) $(INCLUDE_O) 
clean:
	rm -f $(INCLUDE_O)
fclean: clean
	rm -f $(NAME) 
re:	fclean all