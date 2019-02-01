/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:37:42 by maolivie          #+#    #+#             */
/*   Updated: 2019/02/01 18:39:00 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t lens1;

	lens1 = ft_strlen((const char*)s1);
	if (ft_memccpy((void*)(s1 + lens1), (const void*)s2, 0, n) == NULL)
		s1[lens1 + n] = 0;
	return (s1);
}
