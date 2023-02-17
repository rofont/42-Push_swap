/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:14:31 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/16 20:37:28 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_new_node(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		ft_error("Error\nErreur de creation de node");
	new->nombre = content;
	new->index = -1;
	new->next = NULL;
	return (new);
}

t_stack	*ft_check_double(t_stack *lst, t_stack *new)
{
	while (lst->next != NULL)
	{
		if (lst->nombre == new->nombre)
			ft_error("Error\nUn argument est en double");
		lst = lst->next;
	}
	return (lst);
}

void	ft_adback_stack(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_check_double(*lst, new);
	last->next = new;
}
