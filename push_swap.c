/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:14:07 by rofontai          #+#    #+#             */
/*   Updated: 2023/03/03 13:30:31 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main (int argc, char **argv)
{
	// (void)argc;
	// (void)argv;
	int i;
	t_stack *push;
	push = f_pars(argc, argv);
	f_index(push);
	i = push->size_a;
	f_sort(push);
	// while (push->a)
	// {
		// printf("La valeur du node %d, l'index du node %d\n", push->a->nombre, push->a->index);
		// printf("%d\n", push->a->index);
		// printf("%d\n", push->a->next->index);
		// printf("%d\n", push->a->next->next->index);
		// printf("%d\n", i);
	// 	push->a = push->a->next;
	// }
	f_free_list (&push->a);
	f_free_list (&push->b);
	f_free_stack (&push);
	return (0);
}