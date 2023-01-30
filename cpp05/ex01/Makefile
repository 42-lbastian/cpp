NAME = bureaucrat

SRCS =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp \

OBJS = ${SRCS:.cpp=.o}

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

FFLAGS = -g -fsanitize=address

all:	$(NAME)

%.o : %.cpp
		$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

fsan: $(OBJS)
	$(CC) $(CFLAGS) $(FFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

resan: fclean fsan

.PHONY: all clean fclean re
