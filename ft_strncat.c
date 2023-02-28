/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:04:07 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/21 18:49:42 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t n)
{
	size_t	i;
	size_t	di;

	i = -1;
	di = 0;
	while (dest[di])
		di++;
	while (src[++i] && i < n)
		dest[di + i] = src[i];
	dest[di + i] = '\0';
	return (dest);
}
