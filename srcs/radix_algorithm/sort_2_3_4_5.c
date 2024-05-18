/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_3_4_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:06:12 by amecani           #+#    #+#             */
/*   Updated: 2024/05/18 21:13:25 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void harcdoding(int (*i)[6], t_list *a, int o, int compare)
{
	int remember;
	t_list *found;

	while (a)
	{
		if (!a->content && a->rank >= compare)
		{
			compare = a->rank;
			found = a; // found->rank = biggest i(compare);
		}
		a = a->next;
	}
	found->content = 420;
	compare = MIN_INT;
	while (i[0][o]) // how am I supposed find biggesst
	{
		if (!i[0][o + 3] && i[0][o] >= compare)
		{
			compare = i[0][o];
			remember = o;
		}
		o++;
	}
	found->rank = i[0][remember];
	i[0][remember + 3] = 420;
}

static void value_bank(t_list *a, int flag, int (*i)[6])
{
	int f;

	f = 0;
	i[0][3] = 0;
	i[0][4] = 0;
	i[0][5] = 0;
	if (flag == DEPOSIT)
	{
		i[0][0] = a->rank;
		i[0][1] = a->next->rank;
		i[0][2] = a->next->next->rank;
	}
	if (flag == WITHDRAW)
	{
		a->content = 0;
		a->next->content = 0;
		a->next->next->content = 0;
		while (f++ < 3)
			harcdoding(i, a, 0, MIN_INT);
	}
}

void sort_2(t_list **a)
{
	if ((*a)->rank > (*a)->next->rank)
		sa(a);
}

void sort_3(t_list **a)
{
	int	i[6];
	value_bank((*a), DEPOSIT, &i);
	ranking_3(*a, 1, *a, *a);
	if ((*a)->rank == 2 && (*a)->next->rank == 3)
		rra(a);
	else if ((*a)->rank == 1 && (*a)->next->rank == 3)
	{
		rra(a);
		sa(a);
	}
	else if ((*a)->rank == 3 && (*a)->next->rank == 2)
	{
		ra(a);
		sa(a);
	}
	else if ((*a)->rank == 3 && (*a)->next->rank == 1)
		ra(a);
	else if ((*a)->rank == 3 && (*a)->next->rank == 2)
		sa(a);
	else if ((*a)->rank == 2 && (*a)->next->rank == 1)
		sa(a);
	value_bank((*a), WITHDRAW, &i);
}

void sort_4(t_list **a, t_list **b)
{
	pb(a ,b);
	display_ranking((*a));
	sort_3(a);
	display_ranking((*a));
	while ((*b))
	{
		if ((*a)->rank - 1 == (*b)->rank)
			pa(b, a);
		else if ((*b)->rank == 4 && (*a)->rank == 1)
		{
			pa(b, a);
			rra(a);
		}
		else
			rra(a);
	}
	while ((*a)->rank != 1)
		rra(a);
}

t_list	*sort_5(t_list *a)
{
	t_list *b = NULL;
	int flag = 2;

	while (flag != 69)
	{
		if (a->rank == 1 && flag)
		{
			pb(&a, &b);
			flag = 0;
		}
		if (a->rank == 2 && !flag)
		{
			pb(&a, &b);
			flag = 69;
		}
		rra(&a);
	}
	sort_3(&a);
	pa(&b, &a);
	pa(&b, &a);
	return (a);
}
