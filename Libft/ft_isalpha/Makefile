NAME = a.out
CC = gcc
SRC = main.c ft_isalpha.c
OBJS = $(SRC: %.c=%.o)
CFLAGS = -Wall -Werror -Wextra

$(NAME) : $(OBJS)
	$(CC) $(FALGS) -o $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -f *.o
