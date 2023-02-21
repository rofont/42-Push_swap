/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:16:52 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/21 16:09:36 by rofontai         ###   ########.fr       */
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

void	f_index(t_lst **pile)
{

}


void	f_sort(t_stack *stack)
{
	if (f_check_sort(stack->a) == 1)
		(EXIT_SUCCESS);
	else if (stack->size_a == 2)
		f_swap(stack->a);
	// else if (stack->size_a == 3)
	// else if (stack->size_a == 5)
	// else if (stack->size_a > 5)
}