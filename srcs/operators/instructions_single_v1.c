/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_single_v1.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:09:49 by amecani           #+#    #+#             */
/*   Updated: 2024/05/12 17:54:38 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_list **a)
{
	write(1, "sa\n", 3);
	swap(a);
}

void sb(t_list **b)
{
	write(1, "sb\n", 3);
	swap(b);
}

void pb(t_list **a, t_list **b)
{
	write(1, "pb\n", 3);
	push(a, b);
}

void pa(t_list **b, t_list **a)
{
	write(1, "pa\n", 3);
	push(b, a);
}
