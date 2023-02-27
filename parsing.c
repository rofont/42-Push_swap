/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 07:46:05 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/27 08:48:20 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_error(char *str, char **tab, t_lst **node)
{
	if (tab)
		ft_free_tab(tab);
	if (*node)
		f_free_list(node);
	write(STDERR_FILENO, str, ft_strlen(str));
	exit(EXIT_FAILURE);
}

void	f_free_list(t_lst **list)
{
	t_lst *temp;

	if(*list == NULL)
		return ;
	while ((*list))
	{
		temp = (*list)->next;
		free(*list);
		(*list) = temp;
	}
	*list = NULL;
}

int	f_number(char *str)
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
		f_error("Error\nMerci de rentrée un argument valide", 0, 0);
	return (nb);
}

t_stack	*f_pars(int argc, char **argv)
{
	int			i;
	char		**tab;
	t_stack		*push;

	push = f_init();
	i = 0;
	if (argc < 2)
		f_error("Error\nIl manque des arguments", 0, 0);
	if (argc == 2)
	{
		tab = ft_split(argv[1], 32);
		while (tab[i])
		{
			f_addback_node(&push->a, f_new_node(f_number(tab[i])));
			push->size_a++;
			i++;
		}
		ft_free_tab(tab);
	}
	if (argc > 2)
	{
		i = 1;
		while (argv[i])
		{
			f_addback_node(&push->a, f_new_node(f_number(argv[i])));
			push->size_a++;
			i++;
		}
	}
	f_check_double(push->a);
	return (push);
}
