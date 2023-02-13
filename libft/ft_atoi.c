/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:15:50 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/14 09:03:30 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FT_ATOI permet de transformer une chaîne de caractères, représentant
une valeur entière(str), en une valeur numérique de type int.*/
int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	neg;

	if (!str)
		return (0);
	neg = 1;
	i = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb * neg);
}
