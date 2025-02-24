/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboucha <haboucha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:51:40 by haboucha          #+#    #+#             */
/*   Updated: 2025/02/22 19:12:21 by haboucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack **b, t_stack **a)
{
	t_stack	*tmp;

	if (*b == NULL)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
}

void	push_b(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
}

// int main()
// {
//     t_stack *node1,*node2,*node3;

//     node1=(t_stack *)malloc(sizeof(t_stack));
//     if(!node1)
//         return(1);
//     node1->value=1;
//     node1->next=NULL;

//     node2=(t_stack *)malloc(sizeof(t_stack));
//     if(!node2)
//         return(1);
//     node2->value=2;
//     node2->next=NULL;
//     node1->next=node2;

//     node3=(t_stack *)malloc(sizeof(t_stack ));
//     if(!node3)
//         return(1);
//     node3->value =3;
//     node3->next =NULL;
//     node2->next=node3;

//     t_stack *tmp;
//     tmp =node1;
//     while(tmp!=NULL)
//     {
//         printf("%d\n",tmp->value);
//         tmp=tmp->next;
//     }
//     t_stack *b = NULL;
//     push_b(&node1,&b);
//     t_stack *tmp1 = b;
//     while(b!=NULL)
//     {
//         printf("%d\n",b->value);
//         b=b->next;
//     }
// }