/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:47:19 by rofontai          #+#    #+#             */
/*   Updated: 2023/03/03 13:52:55 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_algo_big(t_stack * pile)
{
	int	i;
	int div;

	i = pile->size_a;
	pile->med_a = pile->size_a / 2;
	div = i / 2;
	while (pile->size_a > 3 && div > 0)
	{
		while(pile->size_a != div*2 && pile->size_a > 3)
		{
			if ((pile->a->index >= div) && (pile->a->index < pile->med_a))
			{
				f_push_b(pile);
				f_rotate_b(pile);
			}
			else if ((pile->a->index >= pile->med_a) && (pile->a->index <= i - div))
			{
				f_push_b(pile);
				if (pile->b->next != NULL && pile->b->index < pile->b->next->index)					//TODO si utile
					f_swap_b(pile);
			}
			else
				f_rotate_a(pile);
		}
		div = div/2;
	}
	f_algo_3(pile);
}
