/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboucha <haboucha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:35:31 by haboucha          #+#    #+#             */
/*   Updated: 2025/02/25 12:40:33 by haboucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
	char *word;
	if (argc > 1)
	{
		stocker_a(&a, argv);
		word = get_next_line(0);
		while(word)
		{
			move(&a,&b,word);
		// printf("test1:%s\n", word);
			free(word);
			word = get_next_line(0);
		}
		if(check_sorted(a) && !b)
			write(1,"OK\n",3);
		else
			write(1,"KO\n",3);
		// printf("%s\n",move);
	}
	free_stack(a);
	free_stack(b);
	return (0);
}
