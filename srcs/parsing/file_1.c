/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:39:20 by amecani           #+#    #+#             */
/*   Updated: 2024/05/14 15:41:52 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void number_or_nah(char *number)
{
	int i;
	int flag;

	flag = FAlSE;
	i = 0;
	while (number[i])
	{
		if (number[i] == '-' || number[i] == '+')
		{
			if (flag == TRUE)
				msg_exit("Nuh uh					>:(\n", 1);
			flag = TRUE;
		}
		if (!ft_isdigit(number[i]))
		{
			if (!(number[i] == '-' || number[i] == '+'))
				msg_exit("HEY! Only numbers allowed >:(\n", 1);
		}
		if (ft_isdigit(number[i]) && (number[i + 1] == '-' || number[i + 1] == '+'))
				msg_exit("Your adopted\n", 1);
		if ((number[i] == '-' || number[i] == '+') && !number[i + 1])
				msg_exit("YOU DROPPED THIS KINg\n\t\n\t number\n\t   👐\n\n", 1);
		i++;
	}
}

static	void	hes_littrly_me(t_list *a)
{
	t_list *i;

	while (a)
	{
		i = a->next;
		while (i)
		{
			if (a->content == i->content)
			{
				write(1, "Duplicated Numbers\n", 20);
				exit(1); // bad exit
			}
			i = i->next;
		}
		a = a->next;
	}
}

static void is_int(char *number)
{
	int i;
	char axmin[12] = "-2147483648\0";
	int o;

	i = 0;
	o = ft_strlen(number);
	if ((o > 11 && number[0] == '-') || (o > 10 && number[0] != '-'))
		msg_exit("mpghh... \n too..o. big...", 1);
	if (number[0] != '-')
	{
		ft_memcpy(axmin, axmin + 1, 11);
		axmin[9] = '7';
		axmin[10] = '\0';
	}
	while (((o == 10 && number[0] != '-') || (o == 11 && number[0] == '-'))&& number[i])
	{
		if (number[i] > axmin[i])
			msg_exit("mpghh... \n too..o. big...", 1);
		if (number[i] < axmin[i])
			return;
		i++;
	}
}

static t_list *nom_nom_numbers_into_belly(char *number, t_list *a)
{
	number_or_nah(number);
	is_int(number);
	if (!ft_lstlast(a))
		a = ft_lstnew(ft_atoi(number));
	else
		ft_lstlast(a)->next = ft_lstnew(ft_atoi(number));
	return (a);
}

t_list *parse(int argc, char **argv, long long *tally)
{
	t_list *a = NULL;
	long long	i = 0;
	long long	itiraarate = 0;
	while (++i != argc)
	{
		while ((ft_split(argv[i], ' '))[itiraarate])
		{
			a = nom_nom_numbers_into_belly((ft_split(argv[i], ' '))[itiraarate], a);
			(*tally)++;
			itiraarate++;
		}
		itiraarate = 0;
	}
	hes_littrly_me(a);
	return (a);
}