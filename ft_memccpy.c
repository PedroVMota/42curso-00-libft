/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:11:40 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/23 19:08:42 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	size_t					i;
	unsigned char			*pdst;
	const unsigned char		*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	i = 0;
	while (psrc[i] != (unsigned char) c && psrc[i] && i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	pdst[i] = '\0';
	return (dst);
}
