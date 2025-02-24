/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboucha <haboucha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:31:14 by haboucha          #+#    #+#             */
/*   Updated: 2025/02/24 10:45:07 by haboucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*fin;

	if (!a || !(*a))
		return ;
	tmp = *a;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	fin = tmp->next;
	fin->next = *a;
	*a = fin;
	tmp->next = NULL;
}

void	rrb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*fin;

	if (!b || !(*b))
		return ;
	tmp = (*b);
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	fin = tmp->next;
	fin->next = *b;
	*b = fin;
	tmp->next = NULL;
}
