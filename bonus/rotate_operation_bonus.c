/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboucha <haboucha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:16:46 by haboucha          #+#    #+#             */
/*   Updated: 2025/02/25 14:51:12 by haboucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra(t_stack **a)
{
	t_stack	*debut;
	t_stack	*tmp;

	if (!(*a) || !(*a)->next)
		return ;
	debut = *a;
	*a = (*a)->next;
	tmp = *a;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = debut;
	debut->next = NULL;
}

void	rb(t_stack **b)
{
	t_stack	*debut;
	t_stack	*tmp;

	if (!(*b) || !(*b)->next)
		return ;
	debut = *b;
	*b = (*b)->next;
	tmp = *b;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = debut;
	debut->next = NULL;
}
void rr(t_stack **a,t_stack **b)
{
	ra(a);
	rb(b);
}
