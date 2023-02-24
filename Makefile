# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romain <romain@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 08:05:42 by rofontai          #+#    #+#              #
#    Updated: 2023/02/23 21:12:25 by romain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ARGUMENTS--------------------------------------------------------------------

NAME		= push_swap

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -g

SRC			= parsing.c push_swap.c link_list.c utils.c sort.c push_and_swap.c \
			rotate.c reverse.c
OBJ_DIR		= ./obj
OBJ			= ${SRC:%.c=${OBJ_DIR}/%.o}
DIR_LIBFT	= ./libft
LIBFT		=libft.a

#COLORS------------------------------------------------------------------------

R = $(shell tput -Txterm setaf 1)
G = $(shell tput -Txterm setaf 2)
W = $(shell tput -Txterm setaf 7)
C = $(shell tput -Txterm setaf 6)
Y = $(shell tput -Txterm setaf 3)
Z = $(shell tput -Txterm setaf 5)

#RULES-------------------------------------------------------------------------

${OBJ_DIR}/%.o: %.c
	@${CC} ${CFLAGS} -c $< -o $@

all:  creat ${NAME}

${NAME}: ${DIR_LIBFT}/${LIBFT} $(OBJ) $(SRC)
	@echo $GPUSH_SWAP DONE$W
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(DIR_LIBFT)/$(LIBFT)


${DIR_LIBFT}/${LIBFT}:
	@echo $CLIBFT DONE$W
	@make -C ${DIR_LIBFT}

creat:
	@mkdir -p ${OBJ_DIR}

clean:
	@echo $RCLEAN	DONE$W
	@rm -f ${OBJ}
	@rm -rf ${OBJ_DIR}
	@make clean -C ${DIR_LIBFT}

fclean: clean
	@rm -f ${NAME}
	@make fclean -C ${DIR_LIBFT}
	@echo $RFCLEAN	DONE$W

re: fclean all

generators:
	@open https://www.calculatorsoup.com/calculators/statistics/random-number-generator.php

.PHONY: all clean fclean re run generators