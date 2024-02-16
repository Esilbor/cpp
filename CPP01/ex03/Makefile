# project
NAME = ex03
# compiler
CC = c++
CFLAGS = -Werror -Wextra -Werror -std=c++98 -g3

# directories
SRC_DIR = ./src
BIN_DIR = ./bin

# source files
NAME_FILES := $(wildcard $(SRC_DIR)/*.cpp)

# object files
S_OBJ = $(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%.o,$(NAME_FILES))

all : $(NAME)

$(BIN_DIR)/%.o : $(SRC_DIR)/%.cpp
	@mkdir -p $(BIN_DIR)
	$(CC) -o $@ -c $^ $(CFLAGS)

$(NAME) : $(S_OBJ)
	@$(CC) $(CFLAGS) -o $@ $(S_OBJ)

clean :
	@rm -rf $(BIN_DIR)
	@rm $(NAME)

fclean : clean

re : fclean all

.PHONY: re clean fclean all
