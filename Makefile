NAME = libft.a
CC = cc
CFLAGS = -Werror -Wextra -Wall

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c 
#BONUS_SRCS = 
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(ar rcs) $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean:
	@rm -f $(NAME)