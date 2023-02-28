/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:30:10 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/28 20:53:08 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Allocates (with malloc(3)) and returns a “fresh” link.
	The variables content and content_size of the new link are ini- tialized by
	copy of the parameters of the function. If the parameter content is nul,
	the variable content is initialized to NULL and the variable content_size
	is initialized to 0 even if the parameter content_size isn’t.
	The variable next is initialized to NULL.
	If the allocation fails, the function returns NULL.
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	if (content)
	{
		new_node->content = (void *)malloc(content_size);
		if (!new_node->content)
		{
			free(new_node);
			return (NULL);
		}
		ft_memcpy(new_node->content, content, content_size);
		new_node->content_size = content_size;
	}
	else
	{
		new_node->content = NULL;
		new_node->content_size = 0;
	}
	new_node->next = NULL;
	return (new_node);
}
