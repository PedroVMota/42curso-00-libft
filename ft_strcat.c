/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:18:45 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/18 21:16:40 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	di;
	unsigned int	si;

	si = -1;
	di = 0;
	while (dest[di])
		di++;
	while (src[++si])
	{
		dest[di] = src[si];
		di++;
	}
	dest[di] = 0;
	return (dest);
}
