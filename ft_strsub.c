/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 12:58:54 by maolivie          #+#    #+#             */
/*   Updated: 2019/01/17 21:43:47 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL)
		return (NULL);
	if ((str = ft_strnew(len)) == NULL)
		return (NULL);
	while (len-- > 0)
		str[len] = s[start + len];
	return (str);
}
