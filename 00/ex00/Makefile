SRC = Megaphone.cpp
OBJ = $(SRC:%.cpp=obj/%.o)
CC = c++
FLAGS = -Wall -Werror -Wextra
STD = -std=c++98
NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(STD) -o $@ $^

obj/%.o : src/%.cpp
	mkdir -p obj
	$(CC) $(FLAGS) $(STD) -c $^ -o $@

clean : 
	rm -rf obj

fclean : clean
	rm -rf $(NAME)

re : fclean all