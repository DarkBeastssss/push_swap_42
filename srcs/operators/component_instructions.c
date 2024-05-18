/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   component_instructions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:09:30 by amecani           #+#    #+#             */
/*   Updated: 2024/05/12 17:48:44 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rottate(t_list **node)
{
	t_list *first;
	t_list *last;

	if (!(*node) || !(*node)->next)
		return ;
	first = (*node);
	last = (*node);
	while (last->next)
		last = last->next;
	(*node) = (*node)->next;
	first->next = NULL;
	last->next = first;
}

void	rrottate(t_list **node)
{
	t_list *last;
	t_list *prev;

	if (!(*node) || !(*node)->next)
		return ;
	last = *node;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *node;
	*node = last;
}

void push(t_list **a, t_list **b)
{
	t_list *tmp;

	if (!(*a))
		return ;
	if (!(*a)->next)
	{
		(*a)->next = *b;
		(*b) = (*a);
		(*a) = NULL;
		return ;
	}
	tmp = (*a)->next;
	(*a)->next = *b;
	(*b) = (*a);
	(*a) = tmp;
}


void swap(t_list **node)
{
	t_list *temp;

	if (!(*node) || !(*node)->next)
		return ;
	temp = *node;
	*node = temp->next;
	temp->next = (*node)->next;
	(*node)->next = temp;
}
