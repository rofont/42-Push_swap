/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_and_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:06:15 by romain            #+#    #+#             */
/*   Updated: 2023/02/25 16:47:51 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Intervertit les 2 premiers éléments au sommet de la pile a.
Ne fait rien s’il n’y en a qu’un ou aucun.*/
void	f_swapa(t_stack *pile)
{
	if (pile->a == NULL)
		return ;
	ft_swap(&pile->a->nombre, &pile->a->next->nombre);
	ft_swap(&pile->a->index, &pile->a->next->index);
	printf("sa\n");
}

/*Intervertit les 2 premiers éléments au sommet de la pile b.
Ne fait rien s’il n’y en a qu’un ou aucun.*/
void	f_swapb(t_stack *pile)
{
	if (pile->b == NULL)
		return ;
	ft_swap(&pile->b->nombre, &pile->b->next->nombre);
	ft_swap(&pile->b->index, &pile->b->next->index);
	printf("sb\n");
}

/*sa et sb en même temps.*/
void	f_swap_ab(t_stack *pile)
{
	f_swapa(pile);
	f_swapb(pile);
	printf("ss\n");
}

/*Prend le premier élément au sommet de a et le met sur b.
Ne fait rien si a est vide.*/
void	f_pushb(t_stack *pile)
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
void	f_pusha(t_stack *pile)
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