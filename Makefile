NAME_CLIENT=client
NAME_SERVER=server
NAME_CLIENT_BONUS=client_bonus
NAME_SERVER_BONUS=server_bonus

LIBFT = libft/libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

CLIENT_SRC=client.c tools.c
SERVER_SRC=server.c tools.c
CLIENT_BONUS_SRC=client_bonus.c tools_bonus.c
SERVER_BONUS_SRC=server_bonus.c tools_bonus.c

CLIENT_OBJ=$(CLIENT_SRC:.c=.o)
SERVER_OBJ=$(SERVER_SRC:.c=.o)
CLIENT_BONUS_OBJ=$(CLIENT_BONUS_SRC:.c=.o)
SERVER_BONUS_OBJ=$(SERVER_BONUS_SRC:.c=.o)

all: $(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER): $(SERVER_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(SERVER_OBJ) $(LIBFT) -o $(NAME_SERVER)
$(NAME_CLIENT): $(CLIENT_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(CLIENT_OBJ) $(LIBFT) -o $(NAME_CLIENT)

$(LIBFT):
	make -C libft
	make -C libft bonus

clean:
	make -C libft clean
	rm -f *.o

fclean: clean
	make -C libft fclean
	rm -f $(NAME_SERVER) $(NAME_CLIENT)
	rm -f $(NAME_CLIENT_BONUS) $(NAME_SERVER_BONUS)

re:	fclean $(NAME_SERVER) $(NAME_CLIENT)

bonus: $(NAME_CLIENT_BONUS) $(NAME_SERVER_BONUS)


$(NAME_CLIENT_BONUS): $(CLIENT_BONUS_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(CLIENT_BONUS_OBJ) $(LIBFT) -o $(NAME_CLIENT_BONUS)
$(NAME_SERVER_BONUS): $(SERVER_BONUS_OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(SERVER_BONUS_OBJ) $(LIBFT) -o $(NAME_SERVER_BONUS)

.PHONY: clean fclean re all