/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:53:39 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/21 15:38:46 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_swap(t_lst *stack)
{
	ft_swap(&stack->nombre, &stack->next->nombre);
	ft_swap(&stack->index, &stack->next->index);
	printf("swap\n");
}