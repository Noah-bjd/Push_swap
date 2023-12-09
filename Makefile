# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 02:50:46 by nbouljih          #+#    #+#              #
#    Updated: 2022/09/23 02:50:47 by nbouljih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Push_swap
BONUS_NAME	=	Checker
CC		=	cc
FLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf
#colors:
GREEN		=	\e[92;5;118m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

SRC_F	 =					push_swap.c check_point.c end_of_push_swap.c \
							final_sort.c ft_atoi2.c min_data.c node_man.c \
							op2.c operration.c push_new_node.c sort_table.c\
			 				sorted.c stacks.c tables.c tobi_free.c

OP_F =						pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c ss.c swap_a.c swap_b.c

SRC_F_B =					push_swap_b.c check_point_b.c  \
							ft_atoi2_b.c  get_next_line_bonus.c get_next_line_utils_bonus.c \
							node_man_b.c push_new_node_b.c push_swap_b.c sorted.c stacks_b.c tobi_free_b.c \
							checker_bonus.c sorted_list_bonus.c end_of_push_swap.c 

OP_F_B =	 				pa_b.c pb_b.c ra_b.c rb_b.c rr_b.c rra_b.c rrb_b.c rrr_b.c ss_b.c swap_a_b.c swap_b_b.c 

OP_DIR = sources/operations
SRC_DIR = sources

OP_BONUS_DIR = sources_bonus/operations_bonus
SOURCES_BONUS_DIR = sources_bonus

OP = $(addprefix $(OP_DIR)/, $(OP_F))
SOURCES = $(addprefix $(SRC_DIR)/, $(SRC_F))

OP_BONUS = $(addprefix $(OP_BONUS_DIR)/, $(OP_F_B))
SOURCES_BONUS = $(addprefix $(SOURCES_BONUS_DIR)/, $(SRC_F_B))
	
OP_OBJECTS = $(OP:.c=.o)
OBJECTS = $(SOURCES:.c=.o)

OP_OBJECTS_BONUS = $(OP_BONUS:.c=.o)
OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

all: $(NAME)

bonus: $(BONUS_NAME)

$(NAME): $(OBJECTS) $(OP_OBJECTS)
	@ $(CC) $^ -o $(NAME)
	@printf "$(GREEN)    - Push_swap is ready.\n$(RESET)"

$(BONUS_NAME): $(OBJECTS_BONUS) $(OP_OBJECTS_BONUS)
	$(CC) $^ -o $(BONUS_NAME)
	@printf "$(GREEN)    - Checker is ready.\n$(RESET)"
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	@ $(RM) $(OBJECTS) $(OP_OBJECTS) $(OBJECTS_BONUS) $(OP_OBJECTS_BONUS)
	@printf "$(CURSIVE)$(GRAY)	- Removing .o files ... $(RESET)\n"
	@printf "$(GREEN)    - .o files removed.$(RESET)\n"
fclean: clean
	@ $(RM) $(NAME) $(BONUS_NAME)
	@printf "$(CURSIVE)$(GRAY)	- Removing $(NAME)... $(RESET)\n"
	@printf "$(GREEN)    - Executable removed.$(RESET)\n"
re: fclean all

.PHONY: all bonus clean fclean re