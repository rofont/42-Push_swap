/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 07:46:05 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/13 15:48:42 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**free_tab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

int	ft_check_number(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == 45 || str[i] == 43) && str[i + 1] != '\0')
		i++;
	while (ft_isdigit(str[i]) == 1 && str[i])
		i++;
	if (ft_isdigit(str[i]) == 0 && str[i])
		return (0);
	return (1);
}

int ft_check_error(int nb, char **str)
{
	int		i;
	char	**tab;

	i = 1;
	if (nb > 2)
	{
		while (str[i])
		{
			if (ft_check_number(str[i]) == 0)
			{
				free_tab(str);
				return (printf("error"));
			}
			i++;
		}
	}
	if (nb == 2)
	{
		tab = ft_split(str[1], 32);
		while (tab[i])
		{
			if (ft_check_number(tab[i]) == 0)
			{
				free_tab(tab);
				return (printf("error avec 1 arg"));
			}
			i++;
		}
	}
	return(1);
}