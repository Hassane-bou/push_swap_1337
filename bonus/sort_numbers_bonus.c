/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboucha <haboucha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:00:56 by haboucha          #+#    #+#             */
/*   Updated: 2025/02/25 11:50:53 by haboucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sort_three(t_stack **a)
{
	if (max_element(*a) == (*a)->value)
		move(a, NULL, "ra");
	else if (max_element(*a) == (*a)->next->value)
		move(a, NULL, "rra");
	if ((*a)->value > (*a)->next->value)
		move(a, NULL, "sa");
}

void	sort_four(t_stack **a, t_stack **b)
{
	int		minimum;
	t_stack	*tmp;
	int		i;

	minimum = min_element(*a);
	tmp = *a;
	i = 0;
	while (tmp != NULL)
	{
		if (tmp->value == minimum)
			break ;
		i++;
		tmp = tmp->next;
	}
	while ((*a)->value != minimum)
	{
		if (i <= 2)
			move(a, NULL, "ra");
		else
			move(a, NULL, "rra");
	}
	move(a, b, "pb");
	sort_three(a);
	move(a, b, "pa");
}

void	sort_five(t_stack **a, t_stack **b)
{
	int		min;
	int		i;
	t_stack	*tmp;

	min = min_element(*a);
	i = 0;
	tmp = (*a);
	while (tmp != NULL)
	{
		if (tmp->value == min)
			break ;
		i++;
		tmp = tmp->next;
	}
	while ((*a)->value != min)
	{
		if (i <= 2)
			move(a, b, "ra");
		else
			move(a, b, "rra");
	}
	move(a, b, "pb");
	sort_four(a, b);
	move(a, b, "pa");
}
