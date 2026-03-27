/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-24 00:23:45 by minokim           #+#    #+#             */
/*   Updated: 2026-03-24 00:23:45 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

NAME        = push_swap
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I.

# Hier alle deine .c Dateien eintragen
SRC         = main.c parsing.c utils.c list_utils.c \
              operations_s.c operations_p.c operations_r.c operations_rr.c \
              algorithm_tiny.c

OBJ         = $(SRC:.c=.o)

# Pfad zur Libft
LIBFT_DIR   = ./libft
LIBFT       = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

# Kompiliert die Libft, falls noch nicht geschehen
$(LIBFT):
	make -C $(LIBFT_DIR)

# Erstellt das ausführbare Programm (KEIN ar rcs!)
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