/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <apetitje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:55:00 by apetitje          #+#    #+#             */
/*   Updated: 2016/11/05 19:11:48 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int		i;
	int		nb_words;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		nb_words++;
		while (s[i] != c)
			i++;
	}
	return (nb_words);
}

static void	ft_fill_tab(char *tab, char const *s, char c, int *index)
{
	int		i;

	i = 0;
	while (s[*index] == c)
		(*index)++;
	while (s[*index] != c)
	{
		tab[i] = s[*index];
		(*index)++;
		i++;
	}
	tab[i] = '\0';
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nb_words;
	int		index;
	int		tab_i;
	
	index = 0;
	tab_i = 0;
	nb_words = ft_count_words(s, c);
	if(!(tab = (char **)malloc(sizeof(char *) * (nb_words + 1))))
		return (NULL);
	tab[nb_words] = NULL;
	while (i < nb_words)
	{
		ft_fill_tab(tab[i], s, c, &index);
		i++;
	}
	return (tab);
}
