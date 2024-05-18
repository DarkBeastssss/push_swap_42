/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_single_v2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:54:11 by amecani           #+#    #+#             */
/*   Updated: 2024/05/12 17:54:33 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_list **a)
{
	write(1, "ra\n", 3);
	rottate(a);
}

void rb(t_list **b)
{
	write(1, "rb\n", 3);
	rottate(b);
}

void rra(t_list **a)
{
	write(1, "rra\n", 4);
	rrottate(a);
}

void rrb(t_list **b)
{
	write(1, "rrb\n", 4);
	rrottate(b);
}
