/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:02:35 by maolivie          #+#    #+#             */
/*   Updated: 2018/12/05 00:11:58 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*sdst;
	const unsigned char	*ssrc;

	sdst = (unsigned char*)dst;
	ssrc = (const unsigned char*)src;
	while (n-- > 0)
		sdst[n] = ssrc[n];
	return (dst);
}
