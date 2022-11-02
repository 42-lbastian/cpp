NAME = megaphone

SOURCE = megaphone.cpp

OBJS = ${SRCS:.c=.0}

CC = cc

CFLAGS = -Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
