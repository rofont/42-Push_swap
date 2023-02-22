/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:16:52 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/21 19:59:34 by romain           ###   ########.fr       */
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

	temp = pile->a;
	while (pile->size_a != 0)
	{
		while (pile->a)
		{
			if (temp->nombre < pile->a->nombre)
				temp = pile->a;
			pile->a = pile->a->next;
		}
		pile->a->index = pile->size_a;
		pile->size_a--;
	}
	// while (pile)
	// {
	// 	printf("la valeur du node est %d et l'index et %d\n", pile->a->nombre, pile->a->index);
	// 	pile->a = pile->a->next;
	// }
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