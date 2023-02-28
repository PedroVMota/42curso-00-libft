/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:12:58 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/26 23:37:23 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Lexicographical comparison between s1 and s2.
**If the 2 strings are identical the function returns 1, or 0 otherwise.
*/

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (!(*s1 - *s2))
			return (1);
	}
	return (0);
}
