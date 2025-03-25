NAME = push_swap
BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes

COMMON_SRCS = src/ft_printf/ft_printf.c\
              src/ft_printf/ft_printf_functions.c\
              src/common/libft_utils.c

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

BONUS_SRCS = bonus/checker_bonus.c \
             bonus/check_input_bonus.c \
             bonus/parsing_bonus.c \
             bonus/parsing_utils_bonus.c \
             bonus/stacks_utils_bonus.c \
             bonus/return_error_bonus.c \
             bonus/swap_operations_bonus.c \
             bonus/push_operations_bonus.c \
             bonus/rotate_operations_bonus.c \
             bonus/reverse_rotate_operation_bonus.c \
             bonus/sort_three_bonus.c \
             bonus/sort_four_bonus.c \
             bonus/sort_five_bonus.c \
             bonus/sort_big_bonus.c \
             bonus/index_utils_bonus.c \
             bonus/sorting_utils_bonus.c \
             bonus/get_line.c \
	     $(COMMON_SRCS)

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

bonus: $(BONUS)

$(BONUS): $(BONUS_OBJS)
	$(CC) $(BONUS_OBJS) -o $(BONUS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) $(BONUS)

re: fclean all

.PHONY: all clean fclean re bonus

.SECONDARY: $(OBJS) $(BONUS_OBJS)