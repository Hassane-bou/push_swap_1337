CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS= push_swap.c parse.c liste.c ft_split.c check_stack.c\
	utils.c swap_operation.c sort_numbers.c rotate_operation.c\
	reverse_rotate.c push_operation.c Error_function.c\
	check_liste.c move_function.c type_sort.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap1

all = $(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

re:fclean all

.PHONY: clean
