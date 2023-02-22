/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:16:52 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/22 10:20:39 by rofontai         ###   ########.fr       */
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
	int		i;

	temp = pile->a;
	i = pile->size_a;
	while (i > 0)
	{
		temp = f_search_top(pile->a);
		temp->index = i;
		i--;
	}
	pile->a = temp;
}

t_lst *f_search_top(t_lst *node)
{
	t_lst *temp;

	temp = node;
	while (node && node->index == -1)
	{
		if (temp->nombre < node->nombre)
		{
			temp = node;
		}
		node = node->next;
	}
	return (temp);
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