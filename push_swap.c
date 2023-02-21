/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:26:43 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/21 15:47:21 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *push;

	push = f_pars(argc, argv);
	f_sort(push);
	printf("liste a\n");
	while (push->a)
	{
		printf("la valeur du node est %d et l'index et %d\n", push->a->nombre, push->a->index);
		push->a = push->a->next;
	}
	printf("liste b\n");
	while (push->b)
	{
		printf("la valeur du node est %d et l'index et %d\n", push->b->nombre, push->b->index);
		push->b = push->b->next;
	}
	// printf("la liste est trier  = %d\n", check_sort(push->a));
	// printf("la taille de a est  = %d\n", push->size_a);
	printf("Ok ca marche");
}

