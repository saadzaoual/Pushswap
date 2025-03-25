NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes

COMMON_SRCS = src/ft_printf/ft_printf.c\
              src/ft_printf/ft_printf_functions.c\
              src/common/minor_functions.c

SRCS = src/main.c \
       src/check_input.c \
       src/parsing.c \
       src/parsing_utils.c \
       src/stacks_utils.c \
       src/return_error.c \
       src/swap_operations.c \
       src/push_operations.c \
       src/rotate_operations.c \
       src/reverse_rotate_operation.c \
       src/sort_three.c \
       src/sort_four.c \
       src/sort_five.c \
       src/sort_big.c \
       src/index_utils.c \
       src/sorting_utils.c \
	$(COMMON_SRCS)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SECONDARY: $(OBJS)