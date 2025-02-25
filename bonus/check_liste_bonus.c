/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_liste.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboucha <haboucha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:30:12 by haboucha          #+#    #+#             */
/*   Updated: 2025/02/25 11:50:19 by haboucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	lst_size(t_stack *a)
{
	int		count;
	t_stack	*tmp;

	count = 0;
	tmp = a;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

int	max_element(t_stack *a)
{
	int	tmp;

	tmp = a->value;
	while (a)
	{
		if (a->value > tmp)
			tmp = a->value;
		a = a->next;
	}
	return (tmp);
}

int	min_element(t_stack *a)
{
	int	tmp;

	if (!a)
		return (0);
	tmp = a->value;
	while (a)
	{
		if (a->value < tmp)
			tmp = a->value;
		a = a->next;
	}
	return (tmp);
}

void	indice_lst(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	int		i;

	tmp = (*a);
	while (tmp)
	{
		i = 0;
		tmp1 = (*a);
		while (tmp1)
		{
			if (tmp->value > tmp1->value)
				i++;
			tmp1 = tmp1->next;
		}
		tmp->indice = i;
		tmp = tmp->next;
	}
}
