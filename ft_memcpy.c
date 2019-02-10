/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:02:35 by maolivie          #+#    #+#             */
/*   Updated: 2019/02/10 19:46:10 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*sdst;
	const unsigned char	*ssrc;
	size_t				i;

	if (dst == src)
		return (dst);
	sdst = (unsigned char*)dst;
	ssrc = (const unsigned char*)src;
	i = 0;
	while (i < n)
	{
		sdst[i] = ssrc[i];
		++i;
	}
	return (dst);
}
