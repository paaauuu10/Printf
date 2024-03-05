# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbotargu <pbotargu@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 10:44:14 by pbotargu          #+#    #+#              #
#    Updated: 2023/10/30 10:47:21 by pbotargu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
AR	= ar rcs

NAME	= libftprintf.a

SOURCES	= baseprintf.c ft_printf_char.c ft_printf_hexa_low.c ft_printf_hexa_up.c ft_printf_hexaptr.c ft_printf_id.c ft_printf_string.c ft_printf_unsigned.c 			

OBJECTS	= $(SOURCES:.c=.o)

DEPS	= $(SOURCES:.c=.d)

all: $(NAME)

$(NAME): $(OBJECTS) Makefile
	$(AR) $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) -c $(FLAGS) -I ./ -MMD -MP $< -o $@

-include $(DEPS)

clean:
	@echo "Ejecutando clean..."
	@rm -f $(OBJECTS) $(DEPS) $(NAME) 

fclean: clean
	@echo "Ejecutando fclean..."
	@rm -f $(NAME)

re: fclean all
	@echo "Ejecutando re..."

.PHONY: re fclean clean all


