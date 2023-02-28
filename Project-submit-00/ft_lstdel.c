/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:56:52 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/28 22:18:52 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Takes as a parameter the adress of a pointer to a link and frees the memory 
of this link and every successors of that link using the functions
del and	free(3).
Finally the pointer to the link that was just freed must be set to NULL
(quite similar to the function ft_memdel from the mandatory part).
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*next;

	if (alst == NULL || *alst == NULL)
		return ;
	current = *alst;
	while (current != NULL)
	{
		next = current->next;
		(*del)(current->content, current->content_size);
		free(current);
		current = next;
	}
	*alst = NULL;
}
