# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frrobert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/22 13:11:44 by frrobert          #+#    #+#              #
#    Updated: 2019/03/15 12:45:53 by frrobert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc

NAME_PUSH = push_swap

NAME_CHECKER = checker

FLAGS = -Wall -Wextra -Werror

LIBFT = libft

DIR_S = srcs

DIR_O = obj

HEADER = includes

SOURCES_PUSH   =  dlist_append.c \
				  dlist_delete.c \
				  dlist_display.c \
				  dlist_find.c  \
				  dlist_length.c \
				  dlist_new.c \
				  dlist_prepend.c \
				  dlist_remove_id.c \
				  init.c \
				  is_sort.c \
				  main_push_swap.c \
				  median.c \
				  pa.c \
				  push_swap.c \
				  ra.c \
				  sa.c \
				  sort.c \
				  sort_3.c

SOURCES_CHECKER = dlist_append.c \
				  dlist_delete.c \
				  dlist_display.c \
				  dlist_find.c  \
				  dlist_length.c \
				  dlist_new.c \
				  dlist_prepend.c \
				  dlist_remove_id.c \
				  init.c \
				  is_sort.c \
				  pa.c \
				  ra.c \
				  sa.c \
				  sort.c \
				  sort_3.c \
				  checker.c \
				  maincheck.c

SRCS_PUSH = $(addprefix $(DIR_S)/,$(SOURCES_PUSH))

OBJS_PUSH = $(addprefix $(DIR_O)/,$(SOURCES_PUSH:.c=.o))

SRCS_CHECKER = $(addprefix $(DIR_S)/,$(SOURCES_CHECKER))

OBJS_CHECKER = $(addprefix $(DIR_O)/,$(SOURCES_CHECKER:.c=.o))

all: $(NAME_PUSH) $(NAME_CHECKER)

$(NAME_PUSH): $(OBJS_PUSH)
	make -C $(LIBFT)
	$(C) -L libft -lft $^ -o $@

$(DIR_O)/%.o: $(DIR_S)/%.c $(HEADER)/push_swap.h
	mkdir -p obj
	$(C) $(FLAGS) -c $< -I includes -I libft/libft.h -o $@

$(NAME_CHECKER): $(OBJS_CHECKER)
	make -C $(LIBFT)
	$(C) -L libft -lft $^ -o $@

$(DIR_O)/%.o: $(DIR_S)/%.c $(HEADER)/push_swap.h
	mkdir -p obj
	$(C) $(FLAGS) -c $< -I includes -I libft/libft.h -o $@

norme:
	norminette ./libft/
	@echo
	norminette ./$(HEADER)/
	@echo
	norminette ./$(DIR_S)/

clean:
	rm -f $(OBJS)
	rm -rf $(DIR_O)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME_PUSH) $(NAME_CHECKER)
	make fclean -C $(LIBFT)

re: fclean all

.PHONY: fclean re norme all clean

