NAME = test_printf
CFLAGS = -Wall -Wextra -Werror -I. -Ilibft
LIBFT_DIR = libft
SRCS = ft_printf.c \
       ft_putstr_count.c \
       ft_print_integer.c \
       ft_print_unsigned.c \
       ft_utoa.c \
       main.c \
       ft_puthex.c \
			 ft_print_pointer.c \


OBJS = $(SRCS:.c=.o)
all: $(NAME)
$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	@cc $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT_DIR)/libft.a

%.o: %.c
	@cc $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFT_DIR)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)

re: fclean all
.PHONY: all clean fclean re
