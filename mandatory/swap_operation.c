/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboucha <haboucha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:39:54 by haboucha          #+#    #+#             */
/*   Updated: 2025/02/19 14:15:51 by haboucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!a || !(*a) || !(*a)->next)
		return ;
	tmp1 = (*a);
	tmp2 = (*a)->next;
	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
	(*a) = tmp2;
}

void	sb(t_stack **b)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!b || !(*b) || !(*b)->next)
		return ;
	tmp1 = (*b);
	tmp2 = (*b)->next;
	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
	(*b) = tmp2;
}
