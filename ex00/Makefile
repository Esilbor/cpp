# project
NAME = megaphone
# compiler
CC = g++
CFLAGS = -Werror -Wextra -Werror -std=c++98


# include
NAME_FILES = ./megaphone.cpp

S_SRC = $(NAME_FILES)
C_SRC = $(CLIENT_FILES)

S_OBJ = $(S_SRC:.c=.o)
C_OBJ = $(C_SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) -o $@ -c $^ $(CFLAGS)

$(NAME) : $(S_OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(S_OBJ)


clean :
	@rm -rf $(S_OBJ) $(C_OBJ) $(S_OBJ_B) $(C_OBJ_B)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

rebonus : fclean re bonus

.PHONY: re clean fclean all rebonus bonus
