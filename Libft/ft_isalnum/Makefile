NAME = ft_isalnum.out
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c ft_isalnum.c
OBJS = main.o ft_isalnum.o ft_isalpha.o ft_isdigit.o

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

c.o :
	$(CC) -c -o $@ $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f *.out

re : fclean
	make all

