/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:07:48 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/15 10:17:37 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lstnew_node(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->nbr = content;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	lstadd_back_node(t_stack *lst, t_stack *new)
{
	t_stack	*last;

	if (!lst || !new)
		return ;
	if (lst == NULL)
	{
		lst = new;
		return ;
	}
	last = search_last_node(lst);
	last->next = new;
}

t_stack	*search_last_node(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
