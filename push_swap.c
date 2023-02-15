/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:26:43 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/14 15:21:51 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int argc, char **argv)
{
	int i;
	char **tab;
	i = 0;
	if (argc < 2)
		ft_putendl_fd("Error: pas d'argument", STDERR_FILENO);
	if (argc == 2)
	{
		tab = ft_split(argv[1], 32);
		while (tab[i])
			printf("%i\n", ft_atol(tab[i++]));
		ft_free_tab(tab);
	}
	if (argc > 2)
	{
		i = 1;
		while (argv[i])
			printf("%i\n", ft_atol(argv[i++]));
	}
	printf("Ok tout fonctionne\n");
	return (0);
}