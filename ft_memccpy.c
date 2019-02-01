/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:01:44 by maolivie          #+#    #+#             */
/*   Updated: 2019/02/01 18:35:20 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void *ptr;

	ptr = ft_memchr(src, c, n);
	if (ptr)
		n = ptr - src + 1;
	ft_memcpy(dst, src, n);
	return (ptr ? dst + n : NULL);
}
