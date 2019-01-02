/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maolivie <maolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:55:50 by maolivie          #+#    #+#             */
/*   Updated: 2018/12/03 19:24:59 by maolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_len(int nbr)
{
	size_t			len;
	unsigned int	abs;

	len = 1;
	if (nbr < 0)
	{
		len++;
		abs = -nbr;
	}
	else
		abs = nbr;
	while (abs > 9)
	{
		len++;
		abs /= 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	abs;

	len = nbr_len(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		abs = -n;
	}
	else
		abs = n;
	str[len] = '\0';
	len--;
	while (abs > 9)
	{
		str[len] = (abs % 10) + '0';
		abs /= 10;
		len--;
	}
	str[len] = abs + '0';
	return (str);
}
