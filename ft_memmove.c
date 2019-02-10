/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:06:44 by maolivie          #+#    #+#             */
/*   Updated: 2019/02/10 19:58:27 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*sdst;
	const unsigned char	*ssrc;

	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	else
	{
		sdst = (unsigned char*)dst;
		ssrc = (const unsigned char*)src;
		while (len-- > 0)
			sdst[len] = ssrc[len];
	}
	return (dst);
}
