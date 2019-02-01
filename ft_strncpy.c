/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:03:45 by maolivie          #+#    #+#             */
/*   Updated: 2019/02/01 18:39:19 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	void *ptr;

	ptr = ft_memccpy((void*)dst, (const void*)src, 0, len);
	if (ptr)
		ft_bzero(ptr, len - (ptr - (void*)dst));
	return (dst);
}
