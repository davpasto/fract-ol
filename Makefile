LIBFT_PATH = include/libft
MLX_PATH = include/minilibx-linux

LIBFT = $(LIBFT_PATH)/libft.a
MLX = $(MLX_PATH)/libmlx.a

CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address,leak
LFLAGS = -L$(MLX_PATH) -lmlx -L$(LIBFT_PATH) -lft -L/usr/lib/x11 -lXext -lX11

SRC_DIR = src
OBJ_DIR = obj
INCLUDE_DIR = include

SRC_FILES = \
	    $(SRC_DIR)/main.c\
	    $(SRC_DIR)/init.c\
	    $(SRC_DIR)/keys_and_mouse.c\
	    $(SRC_DIR)/utils.c

OBJ_FILES = \
	    $(OBJ_DIR)/main.o\
	    $(OBJ_DIR)/init.o\
	    $(OBJ_DIR)/keys_and_mouse.o\
	    $(OBJ_DIR)/utils.o

NAME = fractol

all : $(NAME)

$(NAME): $(OBJ_FILES) $(LIBFT) $(MLX)
	@cc $(CFLAGS) -o $@ $^ $(LFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@cc $(CFLAGS) -I$(INCLUDE_DIR) -I$(LIBFT_PATH) -I$(MLX_PATH) -c -o $@ $<

$(LIBFT):
	@$(MAKE) -C $(LIBFT_PATH)

$(MLX):
	@$(MAKE) -C $(MLX_PATH)

clean:
	@$(MAKE) -C $(LIBFT_PATH) clean
	@$(MAKE) -C $(MLX_PATH) clean
	@rm -r $(OBJ_DIR)

fclean: clean
	@$(MAKE) -C $(LIBFT_PATH) fclean
	@rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
