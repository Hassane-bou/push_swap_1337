/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboucha <haboucha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 09:53:54 by haboucha          #+#    #+#             */
/*   Updated: 2025/02/24 10:41:17 by haboucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				indice;
	struct s_stack	*next;
}					t_stack;

char				**ft_split(char *str, char c);
char				*ft_strncpy(char *dst, char *src, int len);
int					ft_count(char *str, char c);
void				ft_add_back_lst(t_stack **lst, t_stack *new);
int					ft_atoi(char *str);
int					ft_isdigit(int c);
t_stack				*ft_lstnew(int content);
int					lst_size(t_stack *a);
int					check_numbers(char *str);
int					is_duplicate(t_stack *lst, int value);
int					check_space(char *str);
int					check_sorted(t_stack *a);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				push_a(t_stack **b, t_stack **a);
void				push_b(t_stack **a, t_stack **b);
void				sort_three(t_stack **a);
void				sort_four(t_stack **a, t_stack **b);
void				sort_five(t_stack **a, t_stack **b);
int					max_element(t_stack *a);
int					min_element(t_stack *a);
void				error_function(void);
char				*allocate_word(char **pr, int i, int j, int k);
void				move(t_stack **a, t_stack **b, char *move);
void				indice_lst(t_stack **a);
void				range_sort(t_stack **a, t_stack **b);

#endif
