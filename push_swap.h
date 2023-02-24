/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 07:47:19 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/23 21:43:57 by romain           ###   ########.fr       */
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

// typedef struct s_mouve
// {
// 	char *swap_a;
// 	char *swap_b;
// 	char *push_a;
// 	char *push_b;
// 	char *rotate_a;
// 	char *rotate_b;
// 	char *rotate_ab;
// 	char *reverse_a;
// 	char *reverse_b;
// 	char *reverse_ab;
// }			t_mouve;


// LINK LIST-------------------------------------------------------------------

t_lst	*f_new_node(int content);
t_lst	*f_last_node(t_lst *list);
void	f_addback_node(t_lst **list, t_lst *new);
t_stack	*f_init(void);
void	f_check_double(t_lst *list);
void	f_free_list(t_lst **list);
t_lst 	*f_search_top(t_lst *pile);
void	f_addfront_node(t_lst **lst, t_lst *new);
t_lst	*f_be_last_node(t_lst *list);

// PARSING----------------------------------------------------------------------

t_stack	*f_pars(int argc, char **argv);
void	f_error(char *str, char **tab, t_lst **node);
int		f_number(char *str);

// SORTING----------------------------------------------------------------------
void 	f_sort(t_stack *stack);
int		f_check_sort(t_lst *list);
void	f_index(t_stack *pile);
void	f_swapa(t_stack *pile);
void	f_swapb(t_stack *pile);
void	f_swap_ab(t_stack *pile);
void	f_pusha(t_stack *pile);
void	f_pushb(t_stack *pile);
void	f_rotatea(t_stack *pile);
void	f_rotateb(t_stack *pile);
void	f_rotate_ab(t_stack *pile);
void	f_reversea(t_stack *pile);
void	f_reverseb(t_stack *pile);
void	f_reverse_ab(t_stack *pile);

// ALGORYTHME-------------------------------------------------------------------
void	algo_2(t_stack *pile);
void	algo_3(t_stack *pile);


#endif
