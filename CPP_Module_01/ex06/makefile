# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maparigi <maparigi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 18:52:45 by maparigi          #+#    #+#              #
#    Updated: 2023/04/24 17:04:59 by maparigi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#----------colors-----------#
NC=\033[0m

Black=\033[0;30m
Red=\033[0;31m
Green=\033[0;32m
Yellow=\033[0;33m
Blue=\033[0;34m
Purple=\033[0;35m
Cyan=\033[0;36m
White=\033[0;37m
Blink=\033[5m
#---------------------------#

NAME = HarlFilter

CC = c++

SRC =	main.cpp \
		Harl.cpp \

OBJ = ${SRC:.cpp=.o}
DEPS = ${SRC:.cpp=.d}

CPPFLAGS = -Wall -Wextra -Werror #-std=c++98

.cpp.o:
	${CC} ${CPPFLAGS} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJ}
	@${CC} ${CPPFLAGS} ${OBJ} -o ${NAME}
	@echo "${_SUCCESS} ${Red}- ${NAME} ready.${NC}"

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME} ${DEPS}

aclean: all clean

re: fclean all

-include : ${DEPS}

.PHONY: all clean fclean re bonus aclean