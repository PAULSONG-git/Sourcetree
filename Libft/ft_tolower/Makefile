NAME = a.out
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
FILES = main \
		ft_tolower \

SRCS_DIR = ./
SRC = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))


all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<
clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean
	make all
