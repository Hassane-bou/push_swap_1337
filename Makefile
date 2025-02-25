CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS= ./mandatory/push_swap.c ./mandatory/parse.c ./mandatory/ft_split.c ./mandatory/check_stack.c\
	./mandatory/utils.c ./mandatory/swap_operation.c ./mandatory/sort_numbers.c\
	./mandatory/rotate_operation.c ./mandatory/reverse_rotate.c ./mandatory/push_operation.c\
	./mandatory/Error_function.c ./mandatory/check_liste.c ./mandatory/move_function.c\
	./mandatory/type_sort.c

SRCS_BONUS = ./bonus/checker.c ./bonus/parse_bonus.c ./bonus/ft_split_bonus.c ./bonus/check_stack_bonus.c\
	./bonus/utils_bonus.c ./bonus/swap_operation_bonus.c ./bonus/sort_numbers_bonus.c\
	./bonus/rotate_operation_bonus.c ./bonus/reverse_rotate_bonus.c ./bonus/push_operation_bonus.c\
	./bonus/Error_function_bonus.c ./bonus/check_liste_bonus.c ./bonus/move_function_bonus.c\
	./bonus/type_sort_bonus.c ./bonus/Get_Next_Line/get_next_line.c ./bonus/Get_Next_Line/get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all = $(NAME)

NAME = push_swap

NAME_BONUS=checker


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)


bonus: $(NAME_BONUS)

$(NAME_BONUS): $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(SRCS_BONUS) -o $(NAME_BONUS)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: clean
