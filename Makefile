# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 22:47:56 by houmanso          #+#    #+#              #
#    Updated: 2022/10/18 23:54:41 by houmanso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}

all: ${NAME}
${NAME} : ${OBJ}
	@ar rc $@ ${OBJ}
%.o : %.c libft.h
	@${CC} ${CFLAGS} -c $<
clean :
	@rm -f ${OBJ}
fclean : clean
	@rm -f ${NAME}
re : fclean all
