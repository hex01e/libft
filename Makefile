# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 22:47:56 by houmanso          #+#    #+#              #
#    Updated: 2022/10/27 21:07:55 by houmanso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = libft.a
CC     = cc
CFLAGS = -Wall -Wextra -Werror

SRC    = ft_atoi.c ft_isalpha.c ft_isprint.c ft_strchr.c  ft_strlen.c ft_strrchr.c\
		ft_bzero.c ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strncmp.c ft_tolower.c\
		ft_isalnum.c ft_isdigit.c ft_memset.c ft_strlcpy.c ft_strnstr.c ft_toupper.c\
		ft_memchr.c ft_memcmp.c ft_memmove.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c	
OBJ    = ${SRC:.c=.o}

B_SRC   = ft_lstnew_bonus.c
B_OBJ    = ${B_SRC:.c=.o}
	
all: ${NAME}

${NAME} : ${OBJ}
	@ar rc $@ ${OBJ}

bonus : ${NAME} ${B_OBJ}
	@ar rc ${NAME} ${B_OBJ}
%.o : %.c libft.h
	@${CC} ${CFLAGS} -c $<

clean :
	@rm -f ${OBJ} ${B_OBJ}
	
fclean : clean
	@rm -f ${NAME}
	
re : fclean all

.PHONY : all clean fclean re 