/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:19:35 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/26 23:37:31 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	exicographical comparison between s1 and s2 up to n characters or until a
**  ’\0’ is reached. If the 2 strings are identical,
**	the function returns 1, or 0 otherwise.
*/

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 && s2)
	{
		while (*s1 && *s2 && *s1 == *s2 && i < n)
		{
			s1++;
			s2++;
		}
		if (!(*s1 - *s2))
			return (1);
	}
	return (0);
}
