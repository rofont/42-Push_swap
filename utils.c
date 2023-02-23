/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:16:52 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/22 22:02:02 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int f_check_sort(t_lst *list)
{
	while(list->next != NULL)
	{
		if (list->next->nombre < list->nombre)
			return (0);
		list = list->next;
	}
	return (1);
}

void	f_index(t_stack *pile)
{
	t_lst	*temp;
	int		size;

	temp = pile->a;
	size = pile->size_a;
	while (size != 0)
	{
		pile->a = f_search_top(pile->a);
		pile->a->index = size;
		pile->a = temp;
		size--;
	}
}




t_lst	*f_search_top(t_lst *pile)
{
	t_lst	*up;

	up = pile;
	while (pile)
	{
		if ((up->nombre < pile->nombre) && pile->index == -1)
				up = pile;
		pile = pile->next;
	}
	return (up);
}
















void	f_sort(t_stack *stack)
{
	if (f_check_sort(stack->a) == 1)
		(EXIT_SUCCESS);
	else if (stack->size_a >= 2)
		f_swap(stack->a);
	// else if (stack->size_a == 3)
	// else if (stack->size_a == 5)
	// else if (stack->size_a > 5)
}