/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 07:46:05 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/17 12:11:20 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_error(char *str)
{
	write(STDERR_FILENO, str, ft_strlen(str));
	exit(EXIT_FAILURE);
}

int	f_atoi(char *str)
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
		f_error("Error\nMerci de rentrée un argument valide");
	return (nb);
}

void	f_pars(int argc, char **argv)
{
	int		i;
	char	**tab;
	t_stack	*stack_a;

	stack_a = NULL;
	i = 0;
	if (argc < 2)
		f_error("Error\nIl manque des arguments");
	if (argc == 2)
	{
		tab = ft_split(argv[1], 32);
		while (tab[i])
		{
			printf("%i\n", f_atoi(tab[i]));
			f_adback_stack(&stack_a, f_new_node(f_atoi(tab[i])));
			i++;
		}
	}
	if (argc > 2)
	{
		i = 1;
		while (argv[i])
		{
			printf("%i\n", f_atoi(argv[i]));
			f_adback_stack(&stack_a, f_new_node(f_atoi(argv[i])));
			i++;
		}
	}
	while (stack_a)
	{
		printf("la valeur du node est %i, la valeur de l'index est %i\n", stack_a->nombre, stack_a->index);
		stack_a = stack_a->next;
	}
}
