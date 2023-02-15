/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 07:47:19 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/15 10:17:49 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PUSH_SWAP_
# define _PUSH_SWAP_

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "./libft/libft.h"

// STRUCTURE-------------------------------------------------------------------
typedef struct s_stack
{
	int				nbr;
	int				index;
	struct s_stack 	*next;
}				t_stack;

t_stack	*lstnew_node(int content);
void lstadd_back_node(t_stack *lst, t_stack *new);
t_stack	*search_last_node(t_stack *lst);


// PARSING----------------------------------------------------------------------

int		ft_atol(char *str);
void	ft_errror(void);

#endif
