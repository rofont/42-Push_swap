# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 08:05:42 by rofontai          #+#    #+#              #
#    Updated: 2023/02/14 15:23:31 by rofontai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ARGUMENTS--------------------------------------------------------------------

NAME		= push_swap

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

SRC			= parsing.c push_swap.c
OBJ			= ${SRC:.c=.o}
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

%.o: %.c
	@${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${DIR_LIBFT}/${LIBFT} $(OBJ) $(SRC)
	@echo $GPUSH_SWAP DONE$W
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(DIR_LIBFT)/$(LIBFT)


${DIR_LIBFT}/${LIBFT}:
	@echo $CLIBFT DONE$W
	@make -C ${DIR_LIBFT}

clean:
	@echo $RCLEAN	DONE$W
	@rm -f ${OBJ}
	@make clean -C ${DIR_LIBFT}

fclean: clean
	@rm -f ${NAME}
	@make fclean -C ${DIR_LIBFT}
	@echo $RFCLEAN	DONE$W

re: fclean all

.PHONY: all clean fclean re run