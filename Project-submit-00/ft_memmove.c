/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:03:25 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/23 18:53:23 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*pd;
	const unsigned char	*ps;

	pd = (unsigned char *)dst;
	ps = (const unsigned char *)src;
	i = 0;
	if (pd < ps)
	{
		while (i < len)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			pd[len - 1] = ps[len - 1];
		}
		len--;
	}
	return (dst);
}
