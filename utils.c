/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:17:34 by rofontai          #+#    #+#             */
/*   Updated: 2023/03/02 11:32:46 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*f_init()
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->a = NULL;
	new->b = NULL;
	new->med_a = 0;
	new->med_b = 0;
	new->size_a = 0;
	new->size_b = 0;
	return (new);
}

t_lst	*f_search_top_index(t_lst *pile)
{
	t_lst	*up;


	up = pile;
	while (pile)
	{
		if ((up->nombre < pile->nombre))
				up = pile;
		pile = pile->next;
	}
	return (up);
}

void	f_addfront_node(t_lst **lst, t_lst *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}