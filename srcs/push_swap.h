/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amecani <amecani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:38:37 by amecani           #+#    #+#             */
/*   Updated: 2024/05/17 21:31:03 by amecani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// dont forget to comment out the display_ranking cuz it uses printf
#include "../includes/libft/libft.h"
#include <stdlib.h>
#include <stdio.h>

#define FAlSE	0
#define TRUE	1

#define MAX_INT	2147483647
#define MIN_INT	-2147483648
#define DEPOSIT	2
#define WITHDRAW 3

typedef struct s_list
{
	int	content;
	int	rank;

	struct s_list	*next;
}	t_list;

////////////////////////// Personal Tools //////////////////////////
void	display_ranking(t_list *a);
void	v1(void);
void	v2(void);
void	n(void);

//////////////////////////	OPERATORS	//////////////////////////
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	pa(t_list **b, t_list **a);
void	ra(t_list **a);
void	rb(t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

//		<-// components //->		//
void	rottate(t_list **node);
void	rrottate(t_list **node);
void	push(t_list **node_x, t_list **node_y);
void	swap(t_list **node);

//////////////////////////	NODE_UTILS	//////////////////////////
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);

//////////////////////////	PARSE	//////////////////////////
t_list *parse(int argc, char **argv, long long *tally);


////////////////////////// CHILD EXCECUTION //////////////////////////
void	ranking(t_list **a, int tally);
void ranking_3(t_list *a, int i, t_list *_alpha_, t_list *found);

void sort_2(t_list **a);
void sort_3(t_list **a);
void sort_4(t_list **a, t_list **b);
t_list	*sort_5(t_list *a);

void	radix(t_list **a, t_list **b);


		//. M A I N \\.
int		main(int argc, char **argv);
void	msg_exit(char *msg, int i);
void	lst_free(t_list *lst);

		//. G E N IU S  T oo L S \\.
void	dam(void);
int		ascending_order(t_list *a, t_list *b);


#endif