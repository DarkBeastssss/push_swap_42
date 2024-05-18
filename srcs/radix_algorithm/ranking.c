/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ranking.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:24:29 by amecani           #+#    #+#             */
/*   Updated: 2024/05/18 19:22:05 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void n(void)
{
	write(1, "\n", 1);
}

void v1(void)
{
	write(1, "v1\n", 4);
}

void v2(void)
{
	write(1, "v2\n", 4);
}

void ranking_3(t_list *a, int i, t_list *_alpha_, t_list *found)
{
	int compare;

	compare = 6;
	//copy into content
	a->content = a->rank;
	a->next->content = a->next->rank;
	a->next->next->content = a->next->next->rank;
	//erase rank
	a->rank = 0;
	a->next->rank = 0;
	a->next->next->rank = 0;
	//prepare rank
	while(i <= 3)
	{
		if (!a->rank && a->content < compare)
		{
			compare = a->content;
			found = a;
		}
		if (a->next)
			a = a->next;
		else
		{
			found->rank = i;
			compare = 6;
			i++;
			a = _alpha_;
		}
	}
}

static void	find_smallest_without_rank(t_list *a, int i)
{
	int compare = MAX_INT;
	t_list *assign_rank;
	while (a)
	{
		if (!a->rank && a->content <= compare)
		{
			compare = a->content;
			assign_rank = a;
		}
		a = a->next;
	}
	assign_rank->rank = i;
}

void	ranking(t_list **a, int tally)
{
	int i = 1;

	while (i <= tally)
		find_smallest_without_rank((*a), i++);
}
