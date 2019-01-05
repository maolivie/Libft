/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:45:08 by maolivie          #+#    #+#             */
/*   Updated: 2018/12/03 19:24:59 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char const	*skip_word(char const *s, char c)
{
	while (*s && *s != c)
		s++;
	return (s);
}

static char const	*skip_sep(char const *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

static unsigned int	nbr_words(char const *s, char c)
{
	unsigned int words;

	words = 0;
	while (*s)
	{
		if (*s != c)
			words++;
		s = skip_word(s, c);
		s = skip_sep(s, c);
	}
	return (words);
}

static void			s_alloc(char ***ptab, unsigned int i, char const *s, char c)
{
	(*ptab)[i] = (char*)malloc(sizeof(char) * (skip_word(s, c) - s + 1));
	if ((*ptab)[i] == NULL)
	{
		while (i-- > 0)
			ft_strdel(*ptab + i);
		free(*ptab);
		*ptab = NULL;
	}
}

char				**ft_strsplit(char const *s, char c)
{
	char			**tab;
	unsigned int	words;
	unsigned int	i;
	unsigned int	j;

	if (s == NULL)
		return (NULL);
	words = nbr_words(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	i = 0;
	s = skip_sep(s, c);
	while (i < words)
	{
		s_alloc(&tab, i, s, c);
		if (tab == NULL)
			return (NULL);
		j = 0;
		while (*s && *s != c)
			tab[i][j++] = *s++;
		tab[i++][j] = '\0';
		s = skip_sep(s, c);
	}
	tab[i] = NULL;
	return (tab);
}