
CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

CFILES = main.cpp\
		Weapon.cpp\
		HumanB.cpp\
		HumanA.cpp\

OFILES = $(addprefix $(OBJ_DIR)/,$(CFILES:.cpp=.o))

OBJ_DIR = ./OBJ

SRC_DIR = .

NAME = Humans

$(NAME) : $(OBJ_DIR) $(OFILES)
	@$(CC) $(OFILES) -o $(NAME)
	@echo "done for Humans"

$(OBJ_DIR):
	@mkdir OBJ

$(OFILES): $(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	@$(CC) -c $(CFLAGS) $< -o $@

clean :
	@rm -rf $(OBJ_DIR)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

all : $(NAME)

.PHONY : re all clean fclean
