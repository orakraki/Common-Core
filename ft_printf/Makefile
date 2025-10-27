# The final library name, as required by the subject
NAME = libftprintf.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Libft location
LIBFT_DIR = libft

# All your project's C files, EXCEPT main.c
SRC = ft_printf.c \
      ft_putstr_count.c \
      ft_print_integer.c \
      ft_utoa.c \
      ft_print_unsigned.c \
      ft_puthex.c \
      ft_print_pointer.c

# Automatically generate object file names
OBJS = $(SRC:.c=.o)

# --- Rules ---

# The default goal is to build the library
all: $(NAME)

# Rule to create the library using the 'ar' archiver
$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	ar rcs $(NAME) $(OBJS) $(LIBFT_DIR)/libft.a

# Generic rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -I. -I$(LIBFT_DIR) -c $< -o $@

# Rule to clean up object files
clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFT_DIR)

# Rule to clean up everything
fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)

# Rule to rebuild everything
re: fclean all

# Tell 'make' that these are aliases, not files
.PHONY: all clean fclean re
