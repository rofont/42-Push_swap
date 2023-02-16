/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:14:31 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/16 16:03:22 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ft_new_node(int content)
{
	t_stack *new;

	new = malloc(sizeof(t_stack));
	if (!new)
		ft_error("Error\nErreur de creation de node");
	new->nombre = content;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void ft_check_double(t_stack *lst, t_stack *new)
{
	if (lst->nombre == new->nombre)
		ft_error("Error\nUn argument est en double");
}

void ft_adback_stack(t_stack *lst, t_stack *new)
{
	if (lst ==NULL)
	{
		lst = new;
		return ;
	}
	while (lst->next != NULL)
	{
		ft_check_double(lst, new);
		lst = lst->next;
	}
	lst->next = new;
}
