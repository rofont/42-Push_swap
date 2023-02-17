/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:14:31 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/17 12:19:04 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*f_new_node(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		f_error("Error\nErreur de creation de node");
	new->nombre = content;
	new->index = -1;
	new->next = NULL;
	return (new);
}

t_stack	*f_check_double(t_stack *lst, t_stack *new)
{
	if (lst->next == NULL)
	{
		if (lst->nombre == new->nombre)
			f_error("Error\nUn argument est en double");
	}
	while (lst->next != NULL)
	{
		if (lst->nombre == new->nombre)
			f_error("Error\nUn argument est en double");
		lst = lst->next;
	}
	return (lst);
}

void	f_adback_stack(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = f_check_double(*lst, new);
	last->next = new;
}
