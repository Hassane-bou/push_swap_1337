/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboucha <haboucha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 10:24:06 by haboucha          #+#    #+#             */
/*   Updated: 2025/02/24 12:14:27 by haboucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_element(t_stack *b, int value)
{
	int	i;

	i = 0;
	while (b)
	{
		if (b->value == value)
			return (i);
		i++;
		b = b->next;
	}
	return (-1);
}

void	push_to_a(t_stack **a, t_stack **b)
{
	while (*b)
	{
		if (max_element(*b) == (*b)->value)
			move(a, b, "pa");
		else if (find_element((*b), max_element((*b))) <= (lst_size(*b) / 2))
			move(NULL, b, "rb");
		else if (find_element((*b), max_element((*b))) > (lst_size(*b) / 2))
			move(NULL, b, "rrb");
	}
}

void	range_sort(t_stack **a, t_stack **b)
{
	int	min_range;
	int	max_range;

	min_range = 0;
	max_range = lst_size(*a) * 0.048 + 10;
	while (*a)
	{
		if ((*a)->indice > max_range)
			move(a, b, "ra");
		else if ((*a)->indice < min_range)
		{
			move(a, b, "pb");
			move(NULL, b, "rb");
			max_range++;
			min_range++;
		}
		else
		{
			move(a, b, "pb");
			max_range++;
			min_range++;
		}
	}
	push_to_a(a, b);
}
