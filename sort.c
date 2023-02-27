/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 08:08:09 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/26 21:48:44 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_sort(t_stack *stack)
{
	if (f_check_sort(stack->a) == 1)
		(EXIT_SUCCESS);
	else if (stack->size_a == 2)
		f_algo_2(stack);
	else if (stack->size_a == 3)
		f_algo_3(stack);
	else if (stack->size_a == 5)
		f_algo_5(stack);
	// else if (stack->size_a > 5)
}

void	f_algo_2(t_stack *pile)
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

void	f_algo_3(t_stack *pile)
{
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
				f_rotatea(pile);
			else
				f_swapa(pile);
		}
		printf("Push_Swap a fonctionné avec SUCCES\n");
			(EXIT_SUCCESS);
	}
}

void	f_algo_5(t_stack *pile)
{
	if (f_check_sort(pile->a) == 1)
	{
		printf("Push_Swap a fonctionné avec SUCCES\n");
			(EXIT_SUCCESS);
	}
	f_pushb(pile);
	if (pile->a->index < pile->b->index)
	{
		f_pushb(pile);
		f_rotateb(pile);
	}
	else
		f_pushb(pile);
	while (f_check_sort(pile->a) == 0)
	{
		if (pile->a->index >= pile->size_a)
				f_rotatea(pile);
			else
				f_swapa(pile);
	}
	// while (pile->a->index != (pile->b->index + 1))
	// {
	// 	f_rotatea(pile);
	// }
	// f_pusha(pile);

}
