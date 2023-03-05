/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:30:01 by pvital-m          #+#    #+#             */
/*   Updated: 2023/03/05 16:40:00 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*dup_str;
	int		i;
	int		len;

	i = -1;
	len = ft_strlen((char *)str);
	dup_str = (char *)malloc((len + 1) * sizeof(char));
	while (str[++i])
		dup_str[i] = str[i];
	dup_str[i] = 0;
	return (dup_str);
}
