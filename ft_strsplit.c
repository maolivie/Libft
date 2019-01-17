/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:45:08 by maolivie          #+#    #+#             */
/*   Updated: 2019/01/17 13:53:02 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SEP '0'
#define WRD '1'

static char const	*skip(char mode, char const *s, char c)
{
	if (mode == SEP)
	{
		while (*s && *s == c)
			s++;
		return (s);
	}
	else
	{
		while (*s && *s != c)
			s++;
		return (s);
	}
}

static unsigned int	nbr_words(char const *s, char c)
{
	unsigned int words;

	words = 0;
	while (*s)
	{
		if (*s != c)
			words++;
		s = skip(WRD, s, c);
		s = skip(SEP, s, c);
	}
	return (words);
}

static char const	*fill_tab(char *str, char const *s, char c)
{
	unsigned int i;

	i = 0;
	while (*s && *s != c)
		str[i++] = *s++;
	str[i] = '\0';
	return (s);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**tab;
	unsigned int	words;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	words = nbr_words(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	i = 0;
	s = skip(SEP, s, c);
	while (i < words)
	{
		if (!(tab[i] = (char*)malloc(sizeof(char) * (skip(WRD, s, c) - s + 1))))
		{
			while (i-- > 0)
				ft_strdel(tab + i);
			free(tab);
			return (NULL);
		}
		s = fill_tab(tab[i++], s, c);
		s = skip(SEP, s, c);
	}
	tab[i] = NULL;
	return (tab);
}
