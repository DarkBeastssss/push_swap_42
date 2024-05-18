/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:43:15 by amecani           #+#    #+#             */
/*   Updated: 2024/05/18 21:16:54 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	msg_exit(char *msg, int i)
{
	// write(2, "Error\n", 7);
	ft_putstr_fd(msg, 1);
	exit(i);
}

int main(int argc, char **argv)
{
	// check leaks
	t_list			*a;
	t_list			*b = NULL;
	long long		tally;

	tally = 0;
	if (argc == 1)
		return (0);
	if (argc == 2 && !argv[1][0])
		return (0);

	a = parse(argc, argv, &tally);
									// 

	dam();

	ranking(&a, tally);
	printf("\t\t\t\t'|Ranking from parsing|'\n");
	display_ranking(a);
	if (tally == 2)
		sort_2(&a);
	else if (tally == 3)
		sort_3(&a);
	else if (tally == 4)
		sort_4(&a , &b);
	else if (tally == 5 )
		a = sort_5(a);
	else if (tally > 5)
		radix(&a, &b);
	printf("TRUE END RESULT\n");
	display_ranking(a);
	lst_free(a);
	if (a)
		printf("\nA aint empty b\n\n");
	if (a)
		display_ranking(a);
	if (b)
		printf("\nB aint empty b\n\n");
	return (0);
}
