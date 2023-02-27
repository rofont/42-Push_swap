/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:57:44 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/27 15:57:43 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_algo_big(t_stack *pile)
{
	int	i;
	int x;

	x = 2;
	i = pile->size_a;
	while (pile->size_a > 3)
	{
		while (pile->size_a != i/x)
		{
			if ((pile->a->index >=  i/(x*2)) && (pile->a->index <= i/x))
			{
				f_pushb(pile);
				f_rotateb(pile);
			}
			else if ((pile->a->index > i/x) && (pile->a->index <= (i - i/(x*2))))
				f_pushb(pile);
			else
				f_rotatea(pile);
		}
		x = x*2;
	}
		// printf("%d", x);
	// while (pile->size_a != i/4)
	// {
	// 	if ((pile->a->index >=  i/8) && (pile->a->index <= i/4))
	// 	{
	// 		f_pushb(pile);
	// 		f_rotateb(pile);
	// 	}
	// 	else if ((pile->a->index > i/4) && (pile->a->index <= (i - i/8)))
	// 		f_pushb(pile);
	// 	else
	// 		f_rotatea(pile);
	// }
	// while (pile->size_a != i/8)
	// {
	// 	if ((pile->a->index >=  i/16) && (pile->a->index <= i/8))
	// 	{
	// 		f_pushb(pile);
	// 		f_rotateb(pile);
	// 	}
	// 	else if ((pile->a->index > i/8) && (pile->a->index <= (i - i/16)))
	// 		f_pushb(pile);
	// 	else
	// 		f_rotatea(pile);
	// }
}





















	// while (pile->size_b < pile->med_a / 2)
	// {
	// 		if (pile->size_a > 1 && (pile->a->index > pile->a->next->index))
	// 			f_rotatea(pile);
	// 		if (pile->a->index <= pile->med_a / 2)
	// 		{
	// 			f_pushb(pile);
	// 			if (pile->size_b > 1 && (pile->b->index < pile->b->next->index))
	// 				f_swapb(pile);
	// 		}
	// 		else
	// 			f_rotatea(pile);
	// }
	// while (pile->size_b < pile->med_a)
	// {
	// 		// if (pile->size_a > 1 && (pile->a->index > pile->a->next->index))
	// 		// 	f_swapa(pile);
	// 		if (pile->a->index <= pile->med_a)
	// 		{
	// 			f_pushb(pile);
	// 			if (pile->size_b > 1 && (pile->b->index < pile->b->next->index))
	// 				f_swapb(pile);
	// 		}
	// 		else
	// 			f_rotatea(pile);
	// }
	// while (pile->size_a != 3)
	// {
	// 		if (pile->size_a > 1 && (pile->a->index > pile->a->next->index))
	// 			f_swapa(pile);
	// 		if (pile->a->index <= (i - 3))
	// 		{
	// 			f_pushb(pile);
	// 			if (pile->size_b > 1 && (pile->b->index < pile->b->next->index))
	// 				f_swapb(pile);
	// 		}
	// 		else
	// 			f_rotatea(pile);
	// }
	// while (f_check_sort(pile->a) == 0)
	// 	{
	// 		if (pile->a->index == i)
	// 			f_rotatea(pile);
	// 		else
	// 			f_swapa(pile);
	// 	}
	// // pile->med_b = pile->size_b / 2;
	// f_pusha(pile);
	// while(pile->size_b != 0)
	// {
	// 	while (pile->b->index != pile->a->index - 1)
	// 		f_rotateb(pile);
	// 	f_pusha(pile);
	// 	while (pile->b->index != pile->a->index - 1)
	// 		f_reverseb(pile);
	// 	f_pusha(pile);
	// }