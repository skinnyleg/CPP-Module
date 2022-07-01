
CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

CFILES = main.cpp\
		zombieHorde.cpp\
		Zombie.cpp\

OFILES = $(addprefix $(OBJ_DIR)/,$(CFILES:.cpp=.o))

OBJ_DIR = ./OBJ

SRC_DIR = .

INC = Zombie.hpp

NAME = HORDE

$(NAME) : $(OFILES)
	@$(CC) $(OFILES) -o $(NAME)
	@echo "done for HORDE"

$(OBJ_DIR) :
	@mkdir OBJ

$(OFILES) : $(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(INC) | $(OBJ_DIR)
	@$(CC) -c $(CFLAGS) $< -o $@

clean :
	@rm -rf $(OBJ_DIR)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

all : $(NAME)

.PHONY : re all clean fclean
