
NAME        = push_swap
CC          = cc
CFLAGS      = -Wall -Wextra -Werror

SRC         = push_swap.c ./operations/push.c ./operations/reverse_rotate.c ./operations/rotate.c ./operations/swap.c\
			./parsing/intminmax.c ./parsing/new_node.c ./parsing/setting_to_NULL.c ./sortings/radix_sort.c ./sortings/tiny_sort.c assign_index.c free.c
OBJ         = $(SRC:.c=.o)

LIBFT_DIR   = ./libft
LIBFT       = $(LIBFT_DIR)/libftprint.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re