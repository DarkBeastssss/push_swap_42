# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amecani <amecani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 14:10:34 by amecani           #+#    #+#              #
#    Updated: 2024/05/17 21:45:23 by amecani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT = includes/libft/libft.a
CFLAGS = -Wall -Werror -Wextra -g3

SOURCES =	$(addprefix srcs/,				main.c)				   \
			$(addprefix srcs/,				important_toosl.c)		\
			$(addprefix srcs/node_utils/,	ft_lstlast.c ft_lstnew.c)\
			$(addprefix srcs/operators/,	component_instructions.c  \
											instructions_single_v1.c   \
											instructions_single_v2.c )	\
		$(addprefix srcs/radix_algorithm/,	radix.c)					 \
		$(addprefix srcs/radix_algorithm/,	ranking.c)					  \
		$(addprefix srcs/radix_algorithm/,	sort_2_3_4_5.c)				   \
		$(addprefix srcs/parsing/,			file_1.c file_2.c)				\

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)
	@$(CC) $(CFLAGS) $(LIBFT) $(OBJECTS) -o $(NAME)

gop: $(NAME)
	@$(CC) $(LIBFT) $(OBJECTS) -o $(NAME)

$(NAME): $(OBJECTS)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJECTS) $()

fclean: clean
	@rm -rf $(OBJECTS)
	@rm -rf $(NAME)

re: fclean all

 bonus: all