/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 08:08:09 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/23 12:31:51 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_sort(t_stack *stack)
{
	if (f_check_sort(stack->a) == 1)
		(EXIT_SUCCESS);
	else if (stack->size_a >= 2)
	{
		f_rotatea(stack);
		f_swap(stack->a);
		f_pushb(stack);
		f_reversea(stack);
	}
	// else if (stack->size_a == 3)
	// else if (stack->size_a == 5)
	// else if (stack->size_a > 5)
}