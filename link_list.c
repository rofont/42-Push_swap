/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:32:52 by rofontai          #+#    #+#             */
/*   Updated: 2023/03/01 10:31:59 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*f_new_node(int content, t_stack *pile)
{
	t_lst	*new;

	new = malloc(sizeof(t_lst));
	if (!new)
		f_error("Error", &pile, 0);
	new->nombre = content;
	new->index = -1;
	new->next = NULL;
	return (new);
}

t_lst	*f_last_node(t_lst *list)
{
	if (!list)
		return (NULL);
	while (list->next != NULL)
		list = list->next;
	return (list);
}

void	f_addback_node(t_lst **list, t_lst *new)
{
	t_lst	*last;

	if (!list || !new)
		return ;
	if (*list == NULL)
	{
		*list = new;

		return ;
	}
	last = f_last_node(*list);
	last->next = new;
}