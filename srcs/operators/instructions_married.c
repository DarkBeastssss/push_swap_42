/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_married.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:09:53 by amecani           #+#    #+#             */
/*   Updated: 2024/05/12 17:53:48 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ss(t_list **a, t_list **b)
{
	write(1, "ss\n", 3);
	sa(a);
	sb(b);
}

void rr(t_list **a, t_list **b)
{
	write(1, "rr", 4);
	ra(a);
	rb(b);
}

void rrr(t_list **a, t_list **b)
{
	write(1, "rrr", 4);
	rra(a);
	rrb(b);
}
