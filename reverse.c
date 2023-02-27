/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:53:39 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/25 17:09:04 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Décale d’une position vers le bas tous les élements de
la pile a. Le dernier élément devient le premier.*/
void	f_reversea(t_stack *pile)
{
	t_lst	*temp;
	t_lst	*last;
	t_lst	*be_last;

	temp = pile->a;
	be_last = f_be_last_node(pile->a);
	last = f_last_node(pile->a);
	last->next = temp;
	be_last->next = NULL;
	pile->a = last;
	printf("rra\n");
}

/*Décale d’une position vers le bas tous les élements de
la pile b. Le dernier élément devient le premier.*/
void	f_reverseb(t_stack *pile)
{
	t_lst	*temp;
	t_lst	*last;
	t_lst	*be_last;

	temp = pile->b;
	be_last = f_be_last_node(pile->b);
	last = f_last_node(pile->b);
	last->next = temp;
	be_last->next = NULL;
	pile->b = last;
	printf("rrb\n");
}

/*rra et rrb en même temps.*/
void	f_reverse_ab(t_stack *pile)
{
	f_reversea(pile);
	f_reverseb(pile);
	printf("rrr\n");
}
