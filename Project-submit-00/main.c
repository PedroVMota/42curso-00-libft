/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:47:26 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/28 22:01:30 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	clear_terminal(void)
{
	printf("\033[2J\033[H");
}

void	del_func(void *content, size_t content_size)
{
	free(content);
	(void)content_size;
}

int	main(void)
{
	t_list	*node;

	clear_terminal(); 
	node = ft_lstnew("hello", 6);
	ft_lstdel(&node, &del_func);
	if (node == NULL)
		printf("The node was successfully deleted.\n");
	else
		printf("The node was not deleted.\n");

	return (0);
}