/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_function_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboucha <haboucha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:48:52 by haboucha          #+#    #+#             */
/*   Updated: 2025/03/01 11:28:26 by haboucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strncmp(char *s1, char *s2, int c)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && i < c)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i] || s2[i])
		return (0);
	return (1);
}

void	free_move(t_stack **a, t_stack **b, char *move)
{
	write(2, "Error\n", 6);
	free(move);
	free(*a);
	free(*b);
	exit(1);
}

void	move(t_stack **a, t_stack **b, char *move)
{
	if (ft_strncmp("pa\n", move, 3))
		push_a(b, a);
	else if (ft_strncmp("pb\n", move, 3))
		push_b(a, b);
	else if (ft_strncmp("sa\n", move, 3))
		sa(a);
	else if (ft_strncmp("sb\n", move, 3))
		sb(b);
	else if (ft_strncmp("ra\n", move, 3))
		ra(a);
	else if (ft_strncmp("rb\n", move, 3))
		rb(b);
	else if (ft_strncmp("rra\n", move, 4))
		rra(a);
	else if (ft_strncmp("rrb\n", move, 4))
		rrb(b);
	else if (ft_strncmp("ss\n", move, 3))
		ss(a, b);
	else if (ft_strncmp("rr\n", move, 3))
		rr(a, b);
	else if (ft_strncmp("rrr\n", move, 4))
		rrr(a, b);
}
