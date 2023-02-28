/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 22:55:45 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/23 23:03:00 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’.
** Each character of the string is initialized at ’\0’.
** If the allocation fails the function returns NULL.
** The size of the string to be allocated.
*/

char	*ft_strnew(size_t size)
{
	char	*dst;

	dst = (char *)malloc((size + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	dst[size] = '\0';
	while (size--)
		dst[size] = '\0';
	return (dst);
}
