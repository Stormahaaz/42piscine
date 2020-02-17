# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gupatric <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 18:53:59 by gupatric          #+#    #+#              #
#    Updated: 2019/07/25 11:12:19 by gupatric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all : ft_display_file

ft_display_file :
		gcc -c roll.c
		gcc roll.o -o ft_display_file

clean :
		rm -f roll.o

fclean : clean
		rm -f ft_display_file

re : fclean all

.PHONY: re fclean all clean
