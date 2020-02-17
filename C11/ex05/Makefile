# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gupatric <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 21:40:02 by gupatric          #+#    #+#              #
#    Updated: 2019/07/23 22:28:17 by gupatric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_atoi.c ft_doop.c main.c
OBJS	= ${SRCS:.c=.o}
CC		= cc
NAME	= do-op

all : ${NAME}

${NAME} : ${OBJS}
		${CC} ${OBJS} -o ${NAME}

${OBJS} :
		${CC} -c ${SRCS}

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all

.PHONY: re fclean all clean

