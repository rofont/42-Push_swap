/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:53:39 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/23 11:53:16 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_swap(t_lst *stack)
{
	ft_swap(&stack->nombre, &stack->next->nombre);
	ft_swap(&stack->index, &stack->next->index);
	printf("swap\n");
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

void	f_rotatea(t_stack *pile)
{
	t_lst	*temp;
	t_lst	*last;
	t_lst	*head;

	head = pile->a->next;
	temp = pile->a;
	last = f_last_node(pile->a);
	last->next = temp;
	temp->next = NULL;
	pile->a = head;
	printf("ra\n");

}

void	f_reversea(t_stack *pile)
{
	t_lst	*temp;
	t_lst	*last;
	t_lst	*be_last;

	temp = pile->a;
	be_last = f_be_last_node(pile->a);
	last = f_last_node(pile->a);
	last->next = temp;
	be_last->next = NULL;
	pile->a = last;
	printf("rra\n");
}