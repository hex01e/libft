# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 22:47:56 by houmanso          #+#    #+#              #
#    Updated: 2022/10/10 19:52:33 by houmanso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}

all: ${NAME}
${NAME} : ${OBJ}
	@ar rcs $@ ${OBJ}
%.o : %.c libft.h
	@${CC} ${CFLAGS} -c $<
clean :
	@rm -f ${OBJ}
fclean : clean
	@rm -f ${NAME}
re : fclean all
