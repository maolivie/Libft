/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 11:46:07 by maolivie          #+#    #+#             */
/*   Updated: 2019/02/02 01:37:44 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (!*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		if ((haystack = ft_strchr(haystack, *needle)) == NULL)
			return (NULL);
		if (ft_strnequ(haystack, needle, ft_strlen(needle)))
			return ((char*)haystack);
		++haystack;
	}
	return (NULL);
}
