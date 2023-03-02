/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:47:19 by rofontai          #+#    #+#             */
/*   Updated: 2023/03/02 15:19:10 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_algo_big(t_stack * pile)
{
	int	i;
	int quart;

	i = pile->size_a;
	quart = i/4;
	pile->med_a = pile->size_a/2;
	while (pile->size_a > pile->med_a)
	{
		if ((pile->a->index < 3*quart) && (pile->a->index >= pile->med_a))
		{
			f_push_b(pile);
			if (pile->size_b > 2 && pile->b->index < pile->b->next->index)
				f_swap_b(pile);
		}
		else if ((pile->a->index >= quart) && (pile->a->index < pile->med_a))
		{
			f_push_b(pile);
			f_rotate_b(pile);
		}
		else
			f_rotate_a(pile);
	}
		// printf("%d\n", pile->a->index);
}