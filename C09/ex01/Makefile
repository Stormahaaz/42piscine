# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gupatric <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 14:32:41 by gupatric          #+#    #+#              #
#    Updated: 2019/10/07 16:25:10 by gupatric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_swap.c srcs/ft_putstr.c \
		  srcs/ft_strlen.c
HEADER	= includes
CC		= gcc -Wall -Wextra -Werror
OBJS	= ${SRCS:.c=.o}

.c.o:
		${CC} -I ${HEADER} -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -rf ${NAME}

re: fclean all

.PHONY:	re fclean all clean
