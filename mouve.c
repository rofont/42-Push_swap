/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:51:20 by rofontai          #+#    #+#             */
/*   Updated: 2023/03/03 12:50:35 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Intervertit les 2 premiers éléments au sommet de la pile a.
Ne fait rien s’il n’y en a qu’un ou aucun.*/
void	f_swap_a(t_stack *pile)
{
	if (pile->a == NULL)
		return ;
	ft_swap(&pile->a->nombre, &pile->a->next->nombre);
	ft_swap(&pile->a->index, &pile->a->next->index);
	printf("sa\n");
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

void	f_swap_b(t_stack *pile)
{
	if (pile->b == NULL || pile->size_b == 1)
		return ;
	ft_swap(&pile->b->nombre, &pile->b->next->nombre);
	ft_swap(&pile->b->index, &pile->b->next->index);
	printf("sb\n");
}

/*Décale d’une position vers le bas tous les élements de
la pile a. Le dernier élément devient le premier.*/
void	f_reverse_a(t_stack *pile)
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