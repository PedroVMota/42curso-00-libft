/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: test <test@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 01:43:07 by pvital-m          #+#    #+#             */
/*   Updated: 2023/03/05 21:16:14 by test             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// determinar o numero de ** que vai ter o split;

int	ft_get_word(char *_str, char c)
{
	int	words;
	int	index;

	
	index = 0;
	words = 0;
	if (!_str[index])
		return (0); // this is for the null char;
	while (_str[index])
	{
		if (_str[index] == c)
		{
			index++;
			continue ;
		}
		words++;
		while (_str[index] != c && _str[index] != 0)
			index++;
	}

	printf("================================\n");
	printf("== THE STRING ==\n%s\nHAS %i WORDS\n", _str, words);
	printf("================================\n");
	return (words); // plus one for the terminating null

	
}

char	**ft_split(char const *s, char c)
{
	int		word_nbr;
	char	**split;

	// len of the main split
	word_nbr = ft_get_word((char *)s, c);
	split = (char **)malloc(sizeof(char *) * (word_nbr + 1));
	if(!split)
		printf("THE POINTER IS NULL");
	split[word_nbr + 1] = 0;
	return (split);
}
