/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:24:24 by pvital-m          #+#    #+#             */
/*   Updated: 2023/03/05 16:44:11 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates (with malloc(3)) and returns a “fresh” substring from the string
**	given as argument. The substring begins at indexstart and is of size len.
**	If start and len aren’t refering to a valid substring,
**	the behavior is undefined.
**	If the allocation fails, the function returns NULL.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t)start > len)
	{
		if ((temp = malloc(1)) == NULL)
			return (NULL);
		temp[0] = '\0';
		return (temp);
	}
	if ((temp = ft_calloc((len + 1), sizeof(char))) == NULL)
		return (NULL);
	while (start <= (unsigned int)len)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	return (temp);

}
