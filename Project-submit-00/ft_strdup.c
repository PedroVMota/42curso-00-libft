/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:30:01 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/23 11:55:29 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*dup_str;
	int		i;
	int		len;

	len = 0;
	while (str[len])
		len++;
	i = -1;
	dup_str = (char *)malloc((len) * sizeof(char));
	while (str[++i])
		dup_str[i] = str[i];
	dup_str[i] = 0;
	return (dup_str);
}
