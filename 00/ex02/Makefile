SRC = tests.cpp Account.cpp
INC = Account.hpp
OBJ = $(SRC:%.cpp=obj/%.o)
CC = c++
FLAGS = -Wall -Wextra -g
STD = -std=c++98 -Iinc
NAME = account

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

test : test.cpp
	$(CC) $(FLAGS) $(STD) test.cpp -o test