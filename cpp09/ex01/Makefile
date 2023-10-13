NAME = RPN

SRCS =	main.cpp \

OBJS = ${SRCS:.cpp=.o}

DEPS = ${SRCS:.cpp=.d}


CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
FFLAGS = -g3 -fsanitize=address

all:	$(NAME)

%.o : %.cpp
		$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

fsan: $(OBJS)
	$(CC) $(CFLAGS) $(FFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	rm -rf $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

resan: fclean fsan

-include $(DEPS)

.PHONY: all clean fclean re
