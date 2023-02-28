/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:34:12 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/28 09:50:39 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int	f_len;

	if (!s)
		return ;
	f_len = (int)ft_strlen((char *)s);
	write(fd, s, f_len);
	write(fd, "\n", 1);
}
