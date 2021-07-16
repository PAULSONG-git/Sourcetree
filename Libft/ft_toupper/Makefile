NAME = a.out
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = main.c ft_toupper.c
OBJS = main.o ft_toupper.o


all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<
clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean
	make all
