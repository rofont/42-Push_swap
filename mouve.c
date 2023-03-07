/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:51:20 by rofontai          #+#    #+#             */
/*   Updated: 2023/03/07 08:42:18 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Prend le premier élément au sommet de b et le met sur a.
Ne fait rien si b est vide.*/
void	f_push_a(t_stack *pile)
{
	t_lst	*temp;
	t_lst	*next;

	if (pile->b == NULL)
		return ;
	temp = pile->b;
	next = pile->b->next;
	f_addfront_node(&pile->a, temp);
	pile->b = next;
	pile->size_a++;
	pile->size_b--;
	printf("pa\n");
}

/*Prend le premier élément au sommet de a et le met sur b.
Ne fait rien si a est vide.*/
void	f_push_b(t_stack *pile)
{
	t_lst	*temp;
	t_lst	*next;

	if (pile->a == NULL)
		return ;
	temp = pile->a;
	next = pile->a->next;
	f_addfront_node(&pile->b, temp);
	pile->a = next;
	pile->size_a--;
	pile->size_b++;
	printf("pb\n");
}

/*Décale d’une position vers le haut tous les élements de la pile a.
Le premier élément devient le dernier.*/
void	f_rotate_a(t_stack *pile)
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
void	f_rotate_b(t_stack *pile)
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
