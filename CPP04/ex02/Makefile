
CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

CFILES = main.cpp\
		Cat.cpp\
		Dog.cpp\
		Animal.cpp\
		Brain.cpp\

OFILES = $(addprefix $(OBJ_DIR)/,$(CFILES:.cpp=.o))

OBJ_DIR = ./OBJ

SRC_DIR = .

INC = *.hpp

NAME = Abstract_class

$(NAME) : $(OBJ_DIR) $(OFILES)
	@$(CC) $(OFILES) -o $(NAME)
	@echo "done for Abstract_class"

$(OBJ_DIR):
	@mkdir OBJ

$(OFILES): $(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(INC)
	@$(CC) -c $(CFLAGS) $< -o $@

clean :
	@rm -rf $(OBJ_DIR)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

all : $(NAME)

.PHONY : re all clean fclean
