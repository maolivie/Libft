/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:06:44 by maolivie          #+#    #+#             */
/*   Updated: 2019/01/17 17:22:16 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*sdst;
	const unsigned char	*ssrc;
	size_t				i;

	sdst = (unsigned char*)dst;
	ssrc = (const unsigned char*)src;
	if (sdst > ssrc)
	{
		while (len-- > 0)
			sdst[len] = ssrc[len];
	}
	if (sdst < ssrc)
	{
		i = 0;
		while (i < len)
		{
			sdst[i] = ssrc[i];
			++i;
		}
	}
	return (dst);
}
