CC = cc 

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_bzero.c ft_memset.c

OBJS = $(SRCS.c=.o)

all: $(NAME)


$(NAME):
		$(CC) $(SRCS) $(CFLAGS)
		 ar $(OBJS)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

x: $(NAME)
	cc main.c $(NAME) -o DENEME
	./DENEME