/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:02:11 by rofontai          #+#    #+#             */
/*   Updated: 2023/02/20 20:53:37 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_tab(char **tab)
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

static size_t	count_word(char const *str, char c)
{
	size_t	i;
	size_t	nbw;

	i = 0;
	nbw = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == c) && str[i])
			i++;
		while ((str[i] != c) && str[i])
			i++;
		if (str[i - 1] != c)
			nbw++;
	}
	return (nbw);
}

static char	**splitcpy(char **split, char const *s, char c)
{
	size_t	word;
	size_t	i;
	size_t	start;

	i = 0;
	word = 0;
	while (s[i] && word < count_word(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
				i++;
		split[word] = ft_substr(s, start, i - start);
		if (!split[word])
			return (free_tab(split));
		word++;
	}
	split[word] = 0;
	return (split);
}

/*FT_SPLIT Alloue de la memoire avec malloc et retourne un tableau
de chaînes de caractères obtenu en séparant (s) à l’aide du caractère
(c), utilisé comme délimiteur. Le tableau doit être terminé par NULL.*/
char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	nbw;

	if (!s)
		return (0);
	nbw = count_word(s, c);
	split = malloc(sizeof(char *) * (nbw + 1));
	if (!split)
		return (0);
	return (splitcpy(split, s, c));
}
