/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:16:52 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/23 11:50:24 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int f_check_sort(t_lst *list)
{
	while(list->next != NULL)
	{
		if (list->next->nombre < list->nombre)
			return (0);
		list = list->next;
	}
	return (1);
}

void	f_index(t_stack *pile)
{
	t_lst	*temp;
	int		size;

	temp = pile->a;
	size = pile->size_a;
	while (size != 0)
	{
		pile->a = f_search_top(pile->a);
		pile->a->index = size--;
		pile->a = temp;
	}
}

t_lst	*f_search_top(t_lst *pile)
{
	t_lst	*up;
	t_lst	*temp;

	up = pile;
	temp = pile;
	while (pile)
	{
		if (pile->index == -1)
			up = pile;
		pile = pile->next;
	}
	pile = temp;

	while (pile)
	{
		if ((up->nombre < pile->nombre) && pile->index == -1)
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

t_lst	*f_be_last_node(t_lst *list)
{
	if (!list)
		return (NULL);
	while (list->next->next != NULL)
		list = list->next;
	return (list);
}