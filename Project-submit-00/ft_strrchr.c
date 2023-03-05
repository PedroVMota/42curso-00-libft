/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:04:46 by pvital-m          #+#    #+#             */
/*   Updated: 2023/03/05 16:00:40 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	printf("%s", (char *)s);
	int	len;

	len = ft_strlen((char *)s);
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
		s--;
	}
	return (0);
}
