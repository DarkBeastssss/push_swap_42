/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   important_toosl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:45:13 by amecani           #+#    #+#             */
/*   Updated: 2024/05/18 21:15:35 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void dam(void)
{
	if("dam🚬")
		return;
}

void lst_free(t_list *lst)
{
	t_list *tmp;

	while (lst)
	{
		display_ranking(lst);
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	display_ranking(lst);
}

void display_ranking(t_list *a)
{
	printf("Ranking :       			");
	while (a)
	{
		printf("%d ", a->rank);
		a = a->next;
	}
	printf("\n");
}

int ascending_order(t_list *a, t_list *b)
{
	if (b)
	{
		msg_exit("b is not empty\n",1);
		return (FAlSE);
	}
	while (a)
	{
		if (!a->next)
			return (TRUE);
		if (a->content < a->next->content)
			return (FAlSE);
		a = a->next;
	}
	return (TRUE);
}
