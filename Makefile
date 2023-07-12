NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

OBJECTS = ft_printf_c.o ft_printf_d.o ft_printf_s.c

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH) all

$(NAME): $(OBJECTS) $(LIBFT)
	cp	libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJECTS) $(LIBFT)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: re  all clean fclean
