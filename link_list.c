/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:14:31 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/21 13:30:33 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*f_init(void)
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

t_lst	*f_new_node(int content)
{
	t_lst	*new;

	new = malloc(sizeof(t_lst));
	if (!new)
		f_error("Error\nErreur de creation de node", 0, 0);
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

void	f_check_double(t_lst *list)
{
	t_lst	*temp;

	while (list->next != NULL)
	{
		temp = list->next;
		while (temp)
		{
			if (temp->nombre == list->nombre)
				f_error("Error\nIl y a un nombre en double", 0, &list);
			temp = temp->next;
		}
		list = list->next;
	}
}
