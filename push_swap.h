/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 07:47:19 by rofontai          #+#    #+#             */
/*   Updated: 2023/03/02 08:40:52 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include "./libft/libft.h"

// STRUCTURE-------------------------------------------------------------------
typedef struct s_lst
{
	int				nombre;
	int				index;
	struct s_lst	*next;
}				t_lst;

typedef	struct s_stack
{
	t_lst	*a;
	t_lst	*b;
	int		size_a;
	int		size_b;
	int		med_a;
	int		med_b;

}				t_stack;

// ERROR-----------------------------------------------------------------------
void	f_free_list(t_lst **list);
void	f_free_stack(t_stack **pile);
void	f_error(char *str, t_stack **pile, char **tab);

// UTILS-----------------------------------------------------------------------
t_stack	*f_init();

// PARSING---------------------------------------------------------------------
int		f_number(char *str, t_stack *pile, char **tab);
t_stack	*f_pars(int argc, char **argv);
void	f_check_double(t_stack *pile, t_lst *node);

// LINK_LIST-------------------------------------------------------------------
t_lst	*f_new_node(int content, t_stack *pile);
t_lst	*f_last_node(t_lst *list);
void	f_addback_node(t_lst **list, t_lst *new);


#endif
