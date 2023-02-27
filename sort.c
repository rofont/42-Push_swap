/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 08:08:09 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/27 12:43:59 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_sort(t_stack *stack)
{
	if (f_check_sort(stack->a) == 1)
		(EXIT_SUCCESS);
	else if (stack->size_a == 2)
	{
		f_algo_2(stack);
		// printf("Push_Swap a fonctionné avec SUCCES\n");
		(EXIT_SUCCESS);

	}
	else if (stack->size_a == 3)
	{
		f_algo_3(stack);
		// printf("Push_Swap a fonctionné avec SUCCES\n");
		(EXIT_SUCCESS);
	}
	else if (stack->size_a > 3 && stack->size_a <= 5)
	{
		f_algo_5(stack);
		// printf("Push_Swap a fonctionné avec SUCCES\n");
		(EXIT_SUCCESS);
	}
	else if (stack->size_a > 5)
	{
		f_algo_big(stack);
		// printf("Push_Swap a fonctionné avec SUCCES\n");
		(EXIT_SUCCESS);
	}
}

void	f_algo_2(t_stack *pile)
{
	if (f_check_sort(pile->a) == 1)
		return ;
	else
	{
		f_swapa(pile);
		return ;
	}
}

void	f_algo_3(t_stack *pile)
{
	if (f_check_sort(pile->a) == 1)
		return ;
	else
	{
		while (f_check_sort(pile->a) == 0)
		{
			if (pile->a->index == pile->size_a)
				f_rotatea(pile);
			else
				f_swapa(pile);
		}
		return ;
	}
}

void	f_algo_5(t_stack *pile)
{
	int i;

	i = pile->size_a;
	if (f_check_sort(pile->a) == 1)
		return ;
	else
	{
		while (pile->a->index != 1)
		{
			if (f_check_sort(pile->a) == 1)
				return ;
			f_rotatea(pile);
		}
		f_pushb(pile);
		while (pile->a->index != 2)
		{
			if (f_check_sort(pile->a) == 1)
				return ;
			f_rotatea(pile);
		}
		f_pushb(pile);
		while (f_check_sort(pile->a) == 0)
		{
			if (pile->a->index == i)
				f_rotatea(pile);
			else
				f_swapa(pile);
		}
		f_pusha(pile);
		f_pusha(pile);
	}
}
