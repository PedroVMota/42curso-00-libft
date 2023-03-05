/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:04:46 by pvital-m          #+#    #+#             */
/*   Updated: 2023/03/05 15:52:20 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
		s++;
	s -= 1;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	if(!(*s))
		return ((char *)s);
	return (NULL);
}
