NAME = libft.a

SRCS = $(shell find . -name *.c)

FLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) : 
	gcc $(FLAGS) -c $(HEADERS) $(SRCS)
	ar rc $(NAME) $(OBJS)

clean : 
	rm -Rf $(OBJS)

fclean : clean
	rm -Rf $(NAME)

re : fclean all
