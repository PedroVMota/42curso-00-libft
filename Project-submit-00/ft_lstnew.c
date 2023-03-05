/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 22:32:56 by pvital-m          #+#    #+#             */
/*   Updated: 2023/03/04 22:33:23 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*value;

	value = (t_list *)malloc(sizeof(t_list));
	if (!value)
		return (NULL);
	value->content = ft_strdup((char *)content);
	value->content_size = content_size;
	value->next = NULL;
	return (value);
}
