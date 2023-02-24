/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:53:39 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/23 21:10:15 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	f_reverse_ab(t_stack *pile)
{
	f_reversea(pile);
	f_reverseb(pile);
	printf("rrr\n");
}
