/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 08:08:09 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/23 21:57:54 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_sort(t_stack *stack)
{
	if (f_check_sort(stack->a) == 1)
		(EXIT_SUCCESS);
	else if (stack->size_a == 2)
		algo_2(stack);
	else if (stack->size_a == 3)
		algo_3(stack);
	// else if (stack->size_a == 5)
	// else if (stack->size_a > 5)
}

void	algo_2(t_stack *pile)
{
	if (f_check_sort(pile->a) == 1)
	{
		printf("Push_Swap a fonctionné avec SUCCES\n");
		(EXIT_SUCCESS);
	}
	else
	{
		f_swapa(pile);
		printf("Push_Swap a fonctionné avec SUCCES\n");
		(EXIT_SUCCESS);
	}
}

void	algo_3(t_stack *pile)
{
	// t_lst	*last;

	// last = f_last_node(pile->a);
	if (f_check_sort(pile->a) == 1)
	{
		printf("Push_Swap a fonctionné avec SUCCES\n");
		(EXIT_SUCCESS);
	}
	else
	{
		while (f_check_sort(pile->a) == 0)
		{
			if (pile->a->index == 3)
			{
				f_rotatea(pile);
			}
			if (pile->a->index == 2)
			{
				f_swapa(pile);
			}
		}
		printf("Push_Swap a fonctionné avec SUCCES\n");
		(EXIT_SUCCESS);
	}
}