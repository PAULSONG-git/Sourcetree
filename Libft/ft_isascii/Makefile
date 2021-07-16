NAME = ft_isascii.out
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = main.c ft_isascii.c
OBJS = $(SRC: %.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean
	make all
