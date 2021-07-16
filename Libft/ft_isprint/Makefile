NAME = ft_isprint.out
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
OBJS = main.o ft_isprint.o

all : $(NAME)


$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean
	make all
