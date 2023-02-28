/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 00:53:20 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/28 01:39:20 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
	Allocates (with malloc(3))
	returns a copy of the string given as argument without whitespaces at the
	beginning or at the end of the string.
	Will be considered as whitespaces the following
	characters ’ ’, ’\n’ and ’\t’.
	If s has no whites- paces at the beginning or at the end, the function
	returns a copy of s.
	If the allocation fails the function returns NULL.
*/

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (s == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen((char *)s) - 1;

	while (ft_isspace(s[start]))
		start++;

	while (end > start && ft_isspace(s[end]))
		end--;

	result = (char *)malloc((end - start + 2) * sizeof(char));

	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s + start, end - start + 2);
	return (result);
}
