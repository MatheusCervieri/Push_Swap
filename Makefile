# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 18:18:37 by roaraujo          #+#    #+#              #
#    Updated: 2022/07/26 04:40:29 by mvieira-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS_PATH = ./includes/
SRCS_PATH = ./srcs/
OBJS_PATH = ./objs/
LIBS_PATH = ./Libft/
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -g3 -I $(HEADERS_PATH)
RM = rm -f
MKDIR = mkdir -p
MAKE_NOPRINT = $(MAKE) --no-print-directory
NAME = push_swap
SRC_FILES = main.c \
			list_utils.c \
			utils.c \
			swap.c \
			push.c \
			rotate.c \
			reverse.c \
			free_list.c \
			is_sorted.c \
			sort.c

LIBFT_A = $(LIBS_PATH)libft.a 
SOURCES = $(addprefix $(SRCS_PATH), $(SRC_FILES))
OBJ_FILES = $(patsubst %.c, %.o, $(SRC_FILES))
OBJECTS = $(addprefix $(OBJS_PATH), $(OBJ_FILES))

all: $(NAME)

$(LIBFT_A):
	@cd $(LIBS_PATH) && $(MAKE_NOPRINT)
	
$(NAME): $(LIBFT_A) $(OBJECTS) 
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) $(LIBFT_A) 

$(OBJS_PATH)%.o : $(SRCS_PATH)%.c
	@$(MKDIR) $(OBJS_PATH)
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: all

run: $(NAME)
	@$(NAME) $(MAP)

valgrind: $(NAME)
	@$(VALGRIND) $(NAME) $(MAP)

clean:
	@$(RM) $(OBJECTS)
	@$(MAKE_NOPRINT) clean -C $(LIBS_PATH)


fclean: clean
	@$(RM) $(NAME)
	@$(MAKE_NOPRINT) fclean -C $(LIBS_PATH)

re: fclean all

.PHONY: all run clean fclean re 