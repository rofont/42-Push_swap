/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:09:26 by romain            #+#    #+#             */
/*   Updated: 2023/02/25 17:10:27 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Décale d’une position vers le haut tous les élements de la pile a.
Le premier élément devient le dernier.*/
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

/*Décale d’une position vers le haut tous les élements de la pile b.
Le premier élément devient le dernier.*/
void	f_rotateb(t_stack *pile)
{
	t_lst	*temp;
	t_lst	*last;
	t_lst	*head;

	head = pile->b->next;
	temp = pile->b;
	last = f_last_node(pile->b);
	last->next = temp;
	temp->next = NULL;
	pile->b = head;
	printf("rb\n");
}

/*rra et rrb en même temps.*/
void	f_rotate_ab(t_stack *pile)
{
	f_rotatea(pile);
	f_rotateb(pile);
	printf("rr\n");
}