/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:06:15 by romain            #+#    #+#             */
/*   Updated: 2023/02/23 21:07:42 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_swapa(t_stack *pile)
{
	ft_swap(&pile->a->nombre, &pile->a->next->nombre);
	ft_swap(&pile->a->index, &pile->a->next->index);
	printf("sa\n");
}

void	f_swapb(t_stack *pile)
{
	ft_swap(&pile->b->nombre, &pile->b->next->nombre);
	ft_swap(&pile->b->index, &pile->b->next->index);
	printf("sb\n");
}

void	f_swap_ab(t_stack *pile)
{
	f_swapa(pile);
	f_swapb(pile);
	printf("ss\n");
}

void	f_pushb(t_stack *pile)
{
	t_lst	*temp;
	t_lst	*next;

	temp = pile->a;
	next = pile->a->next;
	f_addfront_node(&pile->b, temp);
	pile->a = next;
	pile->size_a--;
	pile->size_b++;
	printf("pb\n");
}

void	f_pusha(t_stack *pile)
{
	t_lst	*temp;
	t_lst	*next;

	temp = pile->b;
	next = pile->b->next;
	f_addfront_node(&pile->a, temp);
	pile->b = next;
	pile->size_a++;
	pile->size_b--;
	printf("pa\n");
}