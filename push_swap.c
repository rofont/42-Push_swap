/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:26:43 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/26 21:14:13 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *push;
	push = f_pars(argc, argv);
	f_index(push);
	f_sort(push);
	printf("liste a\n");
	printf("la taille de a est  = %d\n", push->size_a);
	while (push->a)
	{
		printf("la valeur du node est %d et l'index et %d\n", push->a->nombre, push->a->index);
		push->a = push->a->next;
	}
	printf("liste b\n");
	printf("la taille de a est  = %d\n", push->size_b);
	while (push->b)
	{
		printf("la valeur du node est %d et l'index et %d\n", push->b->nombre, push->b->index);
		push->b = push->b->next;
	}
	// printf("la liste est trier  = %d\n", check_sort(push->a));
	printf("Ok ca marche");
}

