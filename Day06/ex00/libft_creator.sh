
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/05 14:13:43 by ccastill          #+#    #+#              #
#    Updated: 2017/07/05 22:02:14 by ccastill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -c *.c
ar rc libft.a *.o
rm *.o
ranlib libft.a 
