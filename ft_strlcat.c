/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:50:17 by maolivie          #+#    #+#             */
/*   Updated: 2019/02/01 21:11:04 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = ft_strlen((const char*)dst);
	if (i >= size)
		return (size + ft_strlen(src));
	if (ft_memccpy((void*)(dst + i), (const void*)src, 0, size - i - 1) == NULL)
		dst[size - 1] = 0;
	return (i + ft_strlen(src));
}
