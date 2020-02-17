# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gupatric <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 18:58:51 by gupatric          #+#    #+#              #
#    Updated: 2019/07/25 11:35:41 by gupatric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

CFLAGS = -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ft_cat.o
		gcc ${CFLAGS} ft_cat.o -o ft_cat

ft_cat.o :
		gcc ${CFLAGS} -c ft_cat.c

clean :
		rm -f ft_cat.o

fclean : clean
		rm -f ${NAME}

re : fclean all

.PHONY: re fclean all clean
