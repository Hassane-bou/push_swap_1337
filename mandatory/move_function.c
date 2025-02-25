/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboucha <haboucha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:48:52 by haboucha          #+#    #+#             */
/*   Updated: 2025/02/22 19:12:55 by haboucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	move(t_stack **a, t_stack **b, char *move)
{
	if (ft_strncmp("pa", move, 2))
		push_a(b, a);
	if (ft_strncmp("pb", move, 2))
		push_b(a, b);
	if (ft_strncmp("sa", move, 2) || ft_strncmp("ss", move, 2))
		sa(a);
	if (ft_strncmp("sb", move, 2) || ft_strncmp("ss", move, 2))
		sb(b);
	if (ft_strncmp("ra", move, 2) || ft_strncmp("rr", move, 2))
		ra(a);
	if (ft_strncmp("rb", move, 2) || ft_strncmp("rr", move, 2))
		rb(b);
	if (ft_strncmp("rra", move, 3) || ft_strncmp("rrr", move, 3))
		rra(a);
	if (ft_strncmp("rrb", move, 3) || ft_strncmp("rrr", move, 3))
		rrb(b);
	write(1, move, ft_strlen(move));
	write(1, "\n", 1);
}
