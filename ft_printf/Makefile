# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/18 17:15:57 by ccoupez           #+#    #+#              #
#    Updated: 2018/01/24 19:12:31 by ccoupez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	NAME = ft_printf
SRCS =	main.c \
		ft_printf.c \
		ft_parse_format.c \
		handle_num.c \
		handle_char.c \

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
LIB = libft/libft.a

.PHONY: all, clean, fclean, re

all: $(NAME)
myp		
$(NAME): $(OBJS)
	@make re -C libft/
	@gcc $(CFLAGS) -o $(NAME) $(LIB) $(OBJS)

%.o:%.c
	@gcc -c $(CFLAGS) $(SRCS)

clean:
	@make clean -C libft/
	@rm -f $(OBJS)

fclean: clean
	@make fclean -C libft/
	@rm -f $(NAME)

re: fclean all
