NAME := violence
SRCFILES := main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CC = c++
CFLAGS = -std=c++98 -Wextra -Werror -Wall
OBJS = $(SRCFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:		fclean all

.PHONY: clean fclean re