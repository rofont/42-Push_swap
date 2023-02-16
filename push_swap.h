/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 07:47:19 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/16 12:45:43 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PUSH_SWAP_
# define _PUSH_SWAP_

# include <stdio.h>
# include <limits.h>
# include "./libft/libft.h"

// STRUCTURE-------------------------------------------------------------------
typedef struct s_stack
{
	int				nombre;
	int				index;
	struct s_stack 	*next;
}				t_stack;

// LINK LIST-------------------------------------------------------------------

t_stack *ft_new_node(int content);
void ft_check_double(t_stack *lst, t_stack *new);
void ft_adback_stack(t_stack *lst, t_stack *new);

// PARSING----------------------------------------------------------------------

void	ft_pars(int argc, char **argv);
void	ft_error(char *str);
int		ft_check_and_conv_arg(char *str);

#endif
