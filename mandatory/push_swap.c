/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboucha <haboucha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:35:31 by haboucha          #+#    #+#             */
/*   Updated: 2025/02/25 10:09:27 by haboucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i++]);
	}
	free(split);
}

void	free_stack(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (a)
	{
		tmp = a;
		a = a->next;
		free(tmp);
	}
}

void	stocker_a(t_stack **a, char **argv)
{
	int		i;
	int		j;
	char	**split;
	t_stack	*node1;

	i = 0;
	while (argv[++i])
	{
		if (!check_space(argv[i]))
			error_function();
		split = ft_split(argv[i], ' ');
		if (!split)
			error_function();
		j = -1;
		while (split[++j])
		{
			if (!check_numbers(split[j]) || is_duplicate(*a, ft_atoi(split[j])))
				error_function();
			node1 = ft_lstnew(ft_atoi(split[j]));
			if (!node1)
				return ;
			ft_add_back_lst(a, node1);
		}
		free_split(split);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		stocker_a(&a, argv);
		indice_lst(&a);
		if (check_sorted(a))
			exit(0);
		if (lst_size(a) <= 3)
			sort_three(&a);
		else if (lst_size(a) <= 4)
			sort_four(&a, &b);
		else if (lst_size(a) <= 5)
			sort_five(&a, &b);
		else
			range_sort(&a, &b);
	}
	free_stack(a);
	return (0);
}
