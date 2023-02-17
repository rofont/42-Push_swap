/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 07:47:19 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/17 12:28:45 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include "./libft/libft.h"

// STRUCTURE-------------------------------------------------------------------
typedef struct s_stack
{
	int				nombre;
	int				index;
	struct s_stack	*next;
}				t_stack;

typedef	struct s_struct
{
	t_stack	*a;
	t_stack *b;
	int		size;
	int		med;

}				t_struct;


// LINK LIST-------------------------------------------------------------------

t_stack	*f_new_node(int content);
t_stack	*f_check_double(t_stack *lst, t_stack *new);
void	f_adback_stack(t_stack **lst, t_stack *new);

// PARSING----------------------------------------------------------------------

void	f_pars(int argc, char **argv);
void	f_error(char *str);
int		f_atoi(char *str);

#endif
