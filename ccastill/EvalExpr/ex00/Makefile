#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 10:30:10 by ccastill          #+#    #+#              #
#    Updated: 2017/07/16 23:22:12 by ccastill         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = eval_expr
SRCS = srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_split_whitespaces.c
INCLUDE_O = ft_atoi.o ft_putnbr.o ft_putchar.o ft_putstr.o ft_split_whitespaces.o

all: $(NAME) | $(SILENT)

SILENT:
	@
$(NAME):
	@gcc -Wall -Werror -Wextra -c $(SRCS) && \
	ar rc libft.a $(INCLUDE_O) && \
	rm $(INCLUDE_O) && \
	ranlib libft.a && \
	gcc -Wall -Werror -Wextra -o $(NAME) main.c -L. -lft
clean:
	-@rm -f $(INCLUDE_O) libft.a
fclean: clean
	-@rm -f $(NAME)
re:	fclean all