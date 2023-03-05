/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test <test@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:32:56 by pvital-m          #+#    #+#             */
/*   Updated: 2023/03/05 19:45:57 by test             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tab;

	tab = (t_list *)malloc(sizeof(t_list));
	tab->content = content;
	tab->next = NULL;
	return (tab);
}
