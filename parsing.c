/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:28:35 by rofontai          #+#    #+#             */
/*   Updated: 2023/03/01 10:31:44 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	f_number(char *str, t_stack *pile, char **tab)
{
	long	nb;
	int		neg;
	int		i;

	neg = 1;
	i = 0;
	nb = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		nb = (nb * 10) + (str[i++] - 48);
	nb *= neg;
	if ((i == 0 || str[i] || nb > INT_MAX || nb < INT_MIN))
		f_error("Error\nMerci de rentrée un argument valide", &pile, tab);
	return (nb);
}

void	f_check_double(t_stack *pile)
{
	t_lst	*temp;

	while (pile->a->next != NULL)
	{
		temp = pile->a->next;
		while (temp)
		{
			if (temp->nombre == pile->a->nombre)
				f_error("Error\nIl y a un nombre en double", &pile, 0);
			temp = temp->next;
		}
		pile->a = pile->a->next;
	}
}

t_stack	*f_pars(int argc, char **argv)
{
	t_stack	*pile;
	char 	**tab;
	int		i;

	i = 0;
	pile = f_init();
	if (argc < 2)
		f_error("Error", &pile, 0);
	if (argc == 2)
	{
		tab = ft_split(argv[1], 32);
		while (tab[i])
		{
			f_addback_node((&pile->a), f_new_node((f_number(tab[i++], pile, tab)), pile));
			pile->size_a++;
		}
		ft_free_tab(tab);
	}
	if (argc > 2)
	{
		i = 1;
		while (argv[i])
		{
			f_addback_node((&pile->a), f_new_node((f_number(argv[i++], pile, 0)), pile));
			pile->size_a++;
		}
	}
	f_check_double(pile);

	return (pile);
}
