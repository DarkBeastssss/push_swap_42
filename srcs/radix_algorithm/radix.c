/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:07:54 by amecani           #+#    #+#             */
/*   Updated: 2024/05/14 21:17:26 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_max_bits(t_list **stack)
{
	t_list	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->content;
	max_bits = 0;
	while (head)
	{
		if (head->content > max)
			max = head->content;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

static int	biggest_number(t_list *a)
{
	int compare;

	compare = (a->rank);
	while (a)
	{
		if (a->rank >= compare)
			compare = a->rank;
		a = a->next;
	}
	return compare;
}

void radix(t_list **a, t_list **b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	display_ranking((*a));
	size = biggest_number(*a);
	max_bits = get_max_bits(a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			if (((*a)->rank >> i) & 1)
				ra(a);
			else
				pb(a, b);
		}
		while (*b != NULL) // check if b is not empty
			pa(b, a);
		i++;
	}

}
// 5 3 4 2 6 1 