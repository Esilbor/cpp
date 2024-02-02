# project
NAME = megaphone
# compiler
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98


# include
NAME_FILES = ./megaphone.cpp

S_SRC = $(NAME_FILES)
C_SRC = $(CLIENT_FILES)

S_OBJ = $(S_SRC:.cpp=.o)
C_OBJ = $(C_SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CXX) -o $@ -c $^ $(CFLAGS)

$(NAME) : $(S_OBJ)
	@$(CXX) $(CFLAGS) -o $(NAME) $(S_OBJ)


clean :
	@rm -rf $(S_OBJ) $(C_OBJ) $(S_OBJ_B) $(C_OBJ_B)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

rebonus : fclean re bonus

.PHONY: re clean fclean all rebonus bonus
